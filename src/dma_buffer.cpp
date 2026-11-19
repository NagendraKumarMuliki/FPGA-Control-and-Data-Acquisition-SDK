#include "dma_buffer.hpp"

DMABuffer::~DMABuffer()
{
    release();
}

bool DMABuffer::allocate(
    size_t size)
{
    if (buffer_ != nullptr)
    {
        release();
    }

    buffer_ = new uint8_t[size];

    if (buffer_ == nullptr)
    {
        return false;
    }

    size_ = size;

    return true;
}

void DMABuffer::release()
{
    delete[] buffer_;

    buffer_ = nullptr;

    size_ = 0;
}

void* DMABuffer::get_buffer()
{
    return buffer_;
}

size_t DMABuffer::get_size() const
{
    return size_;
}