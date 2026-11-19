#include "fpga_device.hpp"
#include "register_map.hpp"

bool FPGADevice::open_device()
{
    connected_ = true;

    return true;
}

void FPGADevice::close_device()
{
    connected_ = false;
}

uint32_t FPGADevice::read_register(
    uint32_t address)
{
    return simulator_.read_register(
        address);
}

void FPGADevice::write_register(
    uint32_t address,
    uint32_t value)
{
    simulator_.write_register(
        address,
        value);
}

uint32_t FPGADevice::get_status()
{
    return simulator_.read_register(
        RegisterMap::STATUS);
}

void FPGADevice::acquire_samples(
    uint8_t* buffer,
    size_t count)
{
    simulator_.generate_samples(
        buffer,
        count);
}