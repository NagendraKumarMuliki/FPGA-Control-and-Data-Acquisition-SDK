from fpga_sdk import FPGADevice

device = FPGADevice()

device.open()

device.start()

print(
    "FPGA Status:",
    device.get_status()
)

device.close()