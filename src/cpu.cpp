#include "cpu.h"
#include <iostream>

CPU::CPU(Memory* mem) {
    memory = mem;
}

void CPU::reset() {
    pc = 0;
    std::cout << "CPU resetada!" << std::endl;
}

void CPU::step() {
    int instruction = memory->read(pc);

    std::cout << "Executando instrução: " << instruction << std::endl;

    pc++;
}
