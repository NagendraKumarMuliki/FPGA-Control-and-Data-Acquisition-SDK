FPGA Control and Data Acquisition SDK Architecture
System Architecture
Python Application
        ↓
Python SDK
        ↓
ctypes
        ↓
C API
        ↓
C++ SDK
        ↓
FPGA Simulator
        ↓
Register Map
C++ Architecture
FPGADevice
     ↓
FPGASimulator
     ↓
RegisterMap
FPGADevice
Responsibilities:

Open device
Close device
Read registers
Write registers
Acquire samples
Get device status
FPGASimulator
Responsibilities:

Simulate FPGA control registers
Simulate FPGA status registers
Generate acquisition data
Process control commands
DMABuffer
Responsibilities:

Allocate buffers
Release buffers
Store acquisition data
Provide buffer access
Python Architecture
FPGADevice (Python)
         ↓
bindings.py
         ↓
ctypes
         ↓
FPGA SDK DLL
Python SDK
Provides:

Device open
Device close
Status monitoring
Register access
Data Flow
Application
     ↓
Start Acquisition
     ↓
Simulator Generates Data
     ↓
DMA Buffer Receives Data
     ↓
Application Reads Samples
Register Map
Register	Address
CONTROL	0x00
STATUS	0x04
DATA_LENGTH	0x08
DMA_ADDRESS	0x0C
INTERRUPT	0x10