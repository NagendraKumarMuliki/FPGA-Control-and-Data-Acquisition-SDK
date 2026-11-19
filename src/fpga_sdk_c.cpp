#include "fpga_sdk_c.h"

#include "fpga_device.hpp"

static FPGADevice g_device;

bool fpga_open()
{
    return g_device.open_device();
}

void fpga_close()
{
    g_device.close_device();
}

uint32_t fpga_read_register(
    uint32_t address)
{
    return g_device.read_register(
        address);
}

void fpga_write_register(
    uint32_t address,
    uint32_t value)
{
    g_device.write_register(
        address,
        value);
}

uint32_t fpga_get_status()
{
    return g_device.get_status();
}

void fpga_acquire_samples(
    uint8_t* buffer,
    uint32_t count)
{
    g_device.acquire_samples(
        buffer,
        count);
}