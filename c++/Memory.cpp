#include "Hardware.cpp"

class Memory : public Hardware
{
private:
    int frequency;
    int memorySize;
    bool supportCuda;

public:
    Memory()
    {
        this->frequency = 0;
        this->memorySize = 0;
        this->supportCuda = false;
    }

    Memory(int frequency, int memorySize, bool supportCuda)
    {
        this->frequency = frequency;
        this->memorySize = memorySize;
        this->supportCuda = supportCuda;
    }

    void setFrequency(int frequency)
    {
        this->frequency = frequency;
    }

    void setMemorySize(int memorySize)
    {
        this->memorySize = memorySize;
    }

    void setSupportCuda(bool supportCuda)
    {
        this->supportCuda = supportCuda;
    }

    int getFrequency()
    {
        return this->frequency;
    }

    int getMemorySize()
    {
        return this->memorySize;
    }

    bool getSupportCuda()
    {
        return this->supportCuda;
    }

    ~Memory(){};
};
