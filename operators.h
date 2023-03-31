#include <cstdint>
#include <iostream>
using namespace std;

uint32_t ADD(uint32_t op1, uint32_t op2)
{
    return op1 + op2;
}

uint32_t AND(uint32_t op1, uint32_t op2)
{
    return op1 & op2;
}

uint32_t SUB(uint32_t op1, uint32_t op2)
{
    return op1 - op2;
}

uint32_t ASR(uint32_t op1, uint32_t op2)
{
    int32_t op3 = op1;
    return op3 >> op2;
}

uint32_t LSL(uint32_t op1, uint32_t op2)
{
    return op1 << op2;
}

uint32_t LSR(uint32_t op1, uint32_t op2)
{
    return op1 >> op2;
}

uint32_t NOT(uint32_t op1, uint32_t op2)
{
    return ~op1;
}
uint32_t ORR(uint32_t op1, uint32_t op2)
{
    return op1 | op2;
}
uint32_t XOR(uint32_t op1, uint32_t op2)
{
    return op1 ^ op2;
}
