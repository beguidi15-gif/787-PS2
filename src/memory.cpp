#include "memory.h"

Memory::Memory() {
    for (int i = 0; i < 1024; i++) {
        ram[i] = 0;
    }
}

int Memory::read(int address) {
    return ram[address];
}

void Memory::write(int address, int value) {
    ram[address] = value;
}
