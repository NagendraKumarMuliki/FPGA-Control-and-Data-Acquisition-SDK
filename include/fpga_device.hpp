#pragma once

#include <cstdint>

#include "fpga_simulator.hpp"

class FPGADevice
{
public:

    bool open_device();

    void close_device();

    uint32_t read_register(
        uint32_t address);

    void write_register(
        uint32_t address,
        uint32_t value);

    uint32_t get_status();

    void acquire_samples(
        uint8_t* buffer,
        size_t count);

private:

    bool connected_ = false;

    FPGASimulator simulator_;
};