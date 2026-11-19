import ctypes
from pathlib import Path

DLL_PATH = (
    Path(__file__).resolve().parents[2]
    / "x64"
    / "Debug"
    / "FPGA-Control-and-Data-Acquisition-SDK.dll"
)

sdk = ctypes.CDLL(str(DLL_PATH))

sdk.fpga_open.restype = ctypes.c_bool

sdk.fpga_close.restype = None

sdk.fpga_get_status.restype = ctypes.c_uint32

sdk.fpga_read_register.argtypes = [
    ctypes.c_uint32
]

sdk.fpga_read_register.restype = (
    ctypes.c_uint32
)

sdk.fpga_write_register.argtypes = [
    ctypes.c_uint32,
    ctypes.c_uint32
]

sdk.fpga_write_register.restype = None

sdk.fpga_acquire_samples.argtypes = [
    ctypes.POINTER(ctypes.c_uint8),
    ctypes.c_uint32
]

sdk.fpga_acquire_samples.restype = None