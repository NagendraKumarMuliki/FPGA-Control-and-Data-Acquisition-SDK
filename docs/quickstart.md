Quick Start Guide
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

print(
    device.get_status()
)

device.close()
Expected Output
FPGA Status: 2
A status value of 2 indicates the FPGA simulator is running.