#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include "operators.h"
using namespace std;

int main()
{
    map<string, uint32_t (*)(string, string)> OPERATORS;
    OPERATORS["ADD"] = ADD;
    OPERATORS["SUB"] = SUB;
    OPERATORS["AND"] = AND;
    OPERATORS["ASR"] = ASR;
    OPERATORS["LSL"] = LSL;
    OPERATORS["LSR"] = LSR;
    OPERATORS["NOT"] = NOT;
    OPERATORS["ORR"] = ORR;
    OPERATORS["XOR"] = XOR;

    string fileName = "input.txt";
    ifstream reader;
    reader.open(fileName);

    string line;
    string operation, operand1, operand2;

    while (getline(reader, line))
    {
        istringstream ss(line);
        string token;
        int count = 0;
        while (getline(ss, token, ' '))
        {
            switch (count)
            {
            case 0:
                operation = token;
                break;
            case 1:
                operand1 = token;
                break;
            default:
                operand2 = token;
            }
            count++;
        }

        uint32_t output = OPERATORS[operation.substr(0, 3)](operand1, operand2);
        int32_t signCheck = output;

        string Z = output == 0 && operation.length() == 4 ? "Z: 1" : "Z: 0";
        string N = signCheck < 0x0 && operation.length() == 4 ? "\tN: 1" : "\tN: 0";

        cout << operation << "\t" << operand1 << "\t" << operand2 << ": " << hex << "0x" << output << endl;
        cout << Z << N << endl;
    }
    return 0;
}
