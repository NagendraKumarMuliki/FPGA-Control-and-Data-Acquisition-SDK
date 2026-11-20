FPGA Control and Data Acquisition SDK
Overview

The FPGA Control and Data Acquisition SDK is a C++ and Python software development kit designed to demonstrate communication between software applications and FPGA-based hardware.

The project provides a software interface for FPGA register access, hardware simulation, DMA-style buffer management, and simulated data acquisition.

Key Components
FPGA register access
FPGA hardware simulation
DMA-style buffer management
C++ hardware abstraction layer
C API for language interoperability
Python bindings using ctypes
Simulated data acquisition
Architecture

The SDK uses a layered architecture to enable communication between Python applications and the FPGA simulator.

text
Python Application
        |
        v
    Python SDK
        |
        v
      ctypes
        |
        v
      C API
        |
        v
     C++ SDK
        |
        v
  FPGA Simulator
        |
        v
   Register Map

Features
1. FPGA Register Map

The SDK provides a register map containing the following supported registers:

Register	Address
CONTROL	0x00
STATUS	0x04
DATA_LENGTH	0x08
DMA_ADDRESS	0x0C
INTERRUPT	0x10
2. FPGA Simulator

The FPGA simulator provides:

Virtual FPGA registers
Control register processing
Status reporting
Simulated acquisition data
3. DMA Buffer Manager

The DMA Buffer Manager provides:

Buffer allocation
Buffer release
Buffer size tracking
Sample storage
4. Python SDK

The Python SDK allows Python applications to:

Open FPGA device
Read status
Access FPGA registers
Control acquisition
Code Examples
C++ Example
cpp
FPGADevice device;

device.open_device();

device.write_register(
    RegisterMap::CONTROL,
    ControlBits::START
);

auto status = device.get_status();

Python Example
python
from fpga_sdk import FPGADevice

device = FPGADevice()

device.open()

device.start()

print(device.get_status())

device.close()

Project Structure
text
FPGA-Control-and-Data-Acquisition-SDK/
│
├── fpga_device.cpp
├── fpga_device.hpp
│
├── fpga_simulator.cpp
├── fpga_simulator.hpp
│
├── dma_buffer.cpp
├── dma_buffer.hpp
│
├── fpga_sdk_c.cpp
├── fpga_sdk_c.h
│
├── register_map.hpp
│
├── python/
│   └── fpga_sdk/
│
└── docs/
    └── README.md

Current Implementation Status

The following components have been implemented:

FPGA Register Map
FPGA Simulator
FPGADevice SDK
DMA Buffer Manager
C API
Python SDK
DLL Generation
Project Summary

The FPGA Control and Data Acquisition SDK demonstrates communication between C++ and Python software applications through a layered SDK architecture, using a C API and ctypes to interface with an FPGA simulator.

The project includes FPGA register access, simulated hardware functionality, DMA-style buffer management, and simulated data acquisition.
