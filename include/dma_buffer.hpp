#pragma once

#include <cstddef>
#include <cstdint>

class DMABuffer
{
public:

    ~DMABuffer();

    bool allocate(
        size_t size);

    void release();

    void* get_buffer();

    size_t get_size() const;

private:

    uint8_t* buffer_ = nullptr;

    size_t size_ = 0;
};