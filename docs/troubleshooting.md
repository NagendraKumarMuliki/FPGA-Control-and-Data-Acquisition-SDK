Troubleshooting
Build Errors
Cannot open include file
Verify:

Header Files
contains all required header files.

Python Cannot Load DLL
Verify:

x64/Debug/
contains:

FPGA-Control-and-Data-Acquisition-SDK.dll
Verify the path in:

bindings.py
is correct.

FPGA Status Remains 1
Expected:

device.start()
before reading status.

Status values:

READY   = 1
RUNNING = 2S
ERROR   = 4
Invalid Register Address
Verify the register exists in:

register_map.hpp