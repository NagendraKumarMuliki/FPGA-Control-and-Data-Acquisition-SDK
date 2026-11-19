FPGA Control and Data Acquisition SDK
Overview
The FPGA Control and Data Acquisition SDK is a C++ and Python software development kit designed to demonstrate communication between software applications and FPGA-based hardware.

This project provides:

FPGA register access
FPGA hardware simulation
DMA-style buffer management
C++ hardware abstraction layer
C API for language interoperability
Python bindings using ctypes
Simulated data acquisition
Architecture
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
Features
FPGA Register Map
Supported registers:

Register	Address
CONTROL	0x00
STATUS	0x04
DATA_LENGTH	0x08
DMA_ADDRESS	0x0C
INTERRUPT	0x10
FPGA Simulator
Provides:

Virtual FPGA registers
Control register processing
Status reporting
Simulated acquisition data
DMA Buffer Manager
Provides:

Buffer allocation
Buffer release
Buffer size tracking
Sample storage
Python SDK
Allows Python applications to:

Open FPGA device
Read status
Access FPGA registers
Control acquisition
C++ Example
FPGADevice device;

device.open_device();

device.write_register(
    RegisterMap::CONTROL,
    ControlBits::START);

auto status =
    device.get_status();
Python Example
from fpga_sdk import FPGADevice

device = FPGADevice()

device.open()

device.start()

print(device.get_status())

device.close()
Project Structure
FPGA-Control-and-Data-Acquisition-SDK

├── fpga_device.cpp
├── fpga_device.hpp
├── fpga_simulator.cpp
├── fpga_simulator.hpp
├── dma_buffer.cpp
├── dma_buffer.hpp
├── fpga_sdk_c.cpp
├── fpga_sdk_c.h
├── register_map.hpp

├── python
│   └── fpga_sdk

└── docs
    └── README.md
Current Status
Implemented:

Register Map
FPGA Simulator
FPGADevice SDK
DMA Buffer Manager
C API
Python SDK
DLL Generation