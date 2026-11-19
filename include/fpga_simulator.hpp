#pragma once

#include <cstdint>
#include <cstddef>
#include <unordered_map>

class FPGASimulator
{
public:

    FPGASimulator();

    void write_register(
        uint32_t address,
        uint32_t value);

    uint32_t read_register(
        uint32_t address);

    void generate_samples(
        uint8_t* buffer,
        size_t count);

private:

    std::unordered_map<uint32_t, uint32_t>
        registers_;
};