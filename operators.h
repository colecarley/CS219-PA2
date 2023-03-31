#include <cstdint>
#include <iostream>
using namespace std;

uint32_t ADD(string op1, string op2)
{
    return stoul(op1, 0, 16) + stoul(op2, 0, 16);
}

uint32_t AND(string op1, string op2)
{
    return stoul(op1, 0, 16) & stoul(op2, 0, 16);
}

uint32_t SUB(string op1, string op2)
{
    return stoul(op1, 0, 16) - stoul(op2, 0, 16);
}

uint32_t ASR(string op1, string op2)
{
    int32_t op3 = stol(op1, 0, 16);
    return op3 >> stoi(op2);
}

uint32_t LSL(string op1, string op2)
{
    return stoul(op1, 0, 16) << stoi(op2);
}

uint32_t LSR(string op1, string op2)
{
    return stoul(op1, 0, 16) >> stoi(op2);
}

uint32_t NOT(string op1, string op2)
{
    return ~stoul(op1, 0, 16);
}
uint32_t ORR(string op1, string op2)
{
    return stoul(op1, 0, 16) | stoul(op2, 0, 16);
}
uint32_t XOR(string op1, string op2)
{
    return stoul(op1, 0, 16) ^ stoul(op2, 0, 16);
}
