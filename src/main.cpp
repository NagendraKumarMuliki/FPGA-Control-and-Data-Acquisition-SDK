#include <iostream>

#include "fpga_sdk_c.h"
#include "register_map.hpp"
#include "dma_buffer.hpp"

int main()
{
    fpga_open();

    fpga_write_register(
        RegisterMap::CONTROL,
        ControlBits::START);

    std::cout
        << "FPGA Status: "
        << fpga_get_status()
        << std::endl;

    DMABuffer dma;

    if (dma.allocate(4096))
    {
        std::cout
            << "DMA Buffer Allocated: "
            << dma.get_size()
            << " bytes"
            << std::endl;

        uint8_t* buffer =
            static_cast<uint8_t*>(
                dma.get_buffer());

        for (size_t i = 0; i < 16; i++)
        {
            buffer[i] =
                static_cast<uint8_t>(
                    128 + i * 4);
        }

        std::cout
            << "First 16 DMA Samples: ";

        for (size_t i = 0; i < 16; i++)
        {
            std::cout
                << static_cast<int>(
                    buffer[i])
                << " ";
        }

        std::cout
            << std::endl;
    }

    dma.release();

    fpga_close();

    return 0;
}