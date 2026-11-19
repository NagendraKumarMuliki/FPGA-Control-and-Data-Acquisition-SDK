API Reference
FPGADevice
open_device()
bool open_device();
Opens the FPGA device connection.

close_device()
void close_device();
Closes the FPGA device connection.

read_register()
uint32_t read_register(
    uint32_t address);
Reads a register value.

write_register()
void write_register(
    uint32_t address,
    uint32_t value);
Writes a register value.

get_status()
uint32_t get_status();
Returns the current FPGA status.

acquire_samples()
void acquire_samples(
    uint8_t* buffer,
    size_t count);
Acquires sample data from the FPGA simulator.