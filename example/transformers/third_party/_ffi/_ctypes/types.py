# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.
"""The C Types used in API."""
# pylint: disable=invalid-name
import ctypes
import struct
from ..base import py_str, check_call, _LIB
from ..runtime_ctypes import TVMByteArray, ArgTypeCode, Device


class TVMValue(ctypes.Union):
    """TVMValue in C API"""

    _fields_ = [
        ("v_int64", ctypes.c_int64),
        ("v_float64", ctypes.c_double),
        ("v_handle", ctypes.c_void_p),
        ("v_str", ctypes.c_char_p),
    ]


TVMPackedCFunc = ctypes.CFUNCTYPE(
    ctypes.c_int,
    ctypes.POINTER(TVMValue),
    ctypes.POINTER(ctypes.c_int),
    ctypes.c_int,
    ctypes.c_void_p,
    ctypes.c_void_p,
)


TVMCFuncFinalizer = ctypes.CFUNCTYPE(None, ctypes.c_void_p)


def _return_handle(x):
    """return handle"""
    handle = x.v_handle
    if not isinstance(handle, ctypes.c_void_p):
        handle = ctypes.c_void_p(handle)
    return handle


def _return_bytes(x):
    """return bytes"""
    handle = x.v_handle
    if not isinstance(handle, ctypes.c_void_p):
        handle = ctypes.c_void_p(handle)
    arr = ctypes.cast(handle, ctypes.POINTER(TVMByteArray))[0]
    size = arr.size
    res = bytearray(size)
    rptr = (ctypes.c_byte * size).from_buffer(res)
    if not ctypes.memmove(rptr, arr.data, size):
        raise RuntimeError("memmove failed")
    return res


def _return_device(value):
    """return Device"""
    # use bit unpacking from int64 view
    # We use this to get around ctypes issue on Union of Structure
    data = struct.pack("=q", value.v_int64)
    arr = struct.unpack("=ii", data)
    return Device(arr[0], arr[1])


def _wrap_arg_func(return_f, type_code):
    def _wrap_func(x):
        tcode = ctypes.c_int(type_code)
        check_call(_LIB.TVMCbArgToReturn(ctypes.byref(x), ctypes.byref(tcode)))
        return return_f(x)

    return _wrap_func


def _device_to_int64(dev):
    """Pack context into int64 in native endian"""
    data = struct.pack("=ii", dev.device_type, dev.device_id)
    return struct.unpack("=q", data)[0]


RETURN_SWITCH = {
    ArgTypeCode.INT: lambda x: x.v_int64,
    ArgTypeCode.FLOAT: lambda x: x.v_float64,
    ArgTypeCode.HANDLE: _return_handle,
    ArgTypeCode.NULL: lambda x: None,
    ArgTypeCode.STR: lambda x: py_str(x.v_str),
    ArgTypeCode.BYTES: _return_bytes,
    ArgTypeCode.DLDEVICE: _return_device,
}

C_TO_PY_ARG_SWITCH = {
    ArgTypeCode.INT: lambda x: x.v_int64,
    ArgTypeCode.FLOAT: lambda x: x.v_float64,
    ArgTypeCode.HANDLE: _return_handle,
    ArgTypeCode.NULL: lambda x: None,
    ArgTypeCode.STR: lambda x: py_str(x.v_str),
    ArgTypeCode.BYTES: _return_bytes,
    ArgTypeCode.DLDEVICE: _return_device,
}
