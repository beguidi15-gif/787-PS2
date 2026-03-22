#include <iostream>
#include "cpu.h"
#include "memory.h"

int main() {
    std::cout << "787 PS2 Emulator iniciado!" << std::endl;

    Memory memory;
    CPU cpu(&memory);

    cpu.reset();

    while (true) {
        cpu.step();
    }

    return 0;
}
