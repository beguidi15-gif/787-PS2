#ifndef MEMORY_H
#define MEMORY_H

class Memory {
public:
    Memory();
    int read(int address);
    void write(int address, int value);

private:
    int ram[1024];
};

#endif
