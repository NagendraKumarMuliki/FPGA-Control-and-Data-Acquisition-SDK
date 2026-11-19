#pragma once

#include <cstdint>

namespace RegisterMap
{
    constexpr uint32_t CONTROL = 0x00;
    constexpr uint32_t STATUS = 0x04;
    constexpr uint32_t DATA_LENGTH = 0x08;
    constexpr uint32_t DMA_ADDRESS = 0x0C;
    constexpr uint32_t INTERRUPT = 0x10;
}

namespace ControlBits
{
    constexpr uint32_t START = 1 << 0;

    constexpr uint32_t STOP = 1 << 1;

    constexpr uint32_t RESET = 1 << 2;
}

namespace StatusBits
{
    constexpr uint32_t READY = 1 << 0;

    constexpr uint32_t RUNNING = 1 << 1;

    constexpr uint32_t ERROR = 1 << 2;
}