#ifndef CPU_H
#define CPU_H

#include "memory.h"

class CPU {
public:
    CPU(Memory* mem);
    void reset();
    void step();

private:
    Memory* memory;
    int pc; // program counter
};

#endif
