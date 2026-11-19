#pragma once

#include <stdint.h>

#ifdef _WIN32
#define FPGA_API __declspec(dllexport)
#else
#define FPGA_API
#endif

#ifdef __cplusplus
extern "C"
{
#endif

    FPGA_API bool fpga_open();

    FPGA_API void fpga_close();

    FPGA_API uint32_t fpga_read_register(
        uint32_t address);

    FPGA_API void fpga_write_register(
        uint32_t address,
        uint32_t value);

    FPGA_API uint32_t fpga_get_status();

    FPGA_API void fpga_acquire_samples(
        uint8_t* buffer,
        uint32_t count);

#ifdef __cplusplus
}
#endif