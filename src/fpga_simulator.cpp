#include "fpga_simulator.hpp"
#include "register_map.hpp"

#include <iostream>

FPGASimulator::FPGASimulator()
{
    registers_[RegisterMap::CONTROL] = 0;

    registers_[RegisterMap::STATUS] =
        StatusBits::READY;

    registers_[RegisterMap::DATA_LENGTH] = 1024;

    registers_[RegisterMap::DMA_ADDRESS] = 0;
}

void FPGASimulator::write_register(
    uint32_t address,
    uint32_t value)
{
    if (registers_.find(address)
        == registers_.end())
    {
        std::cout
            << "Invalid register address\n";

        return;
    }

    registers_[address] = value;

    if (address == RegisterMap::CONTROL)
    {
        if (value & ControlBits::START)
        {
            registers_[RegisterMap::STATUS] =
                StatusBits::RUNNING;
        }

        if (value & ControlBits::STOP)
        {
            registers_[RegisterMap::STATUS] =
                StatusBits::READY;
        }

        if (value & ControlBits::RESET)
        {
            registers_[RegisterMap::STATUS] =
                StatusBits::READY;
        }
    }
}

uint32_t FPGASimulator::read_register(
    uint32_t address)
{
    if (registers_.find(address)
        == registers_.end())
    {
        std::cout
            << "Invalid register address\n";

        return 0;
    }

    return registers_[address];
}

void FPGASimulator::generate_samples(
    uint8_t* buffer,
    size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        buffer[i] =
            static_cast<uint8_t>(
                128 + (i % 32) * 4);
    }
}