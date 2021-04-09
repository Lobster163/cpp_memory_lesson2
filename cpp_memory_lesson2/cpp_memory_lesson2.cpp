﻿
#include <iostream>
#include <bitset>

void convert(uint32_t& ref, unsigned char* data)
{
    ref = static_cast<uint32_t>(data[0] << 12) | static_cast<uint32_t>(data[1] << 8) |  static_cast<uint32_t>(data[2] << 4) | static_cast<uint32_t>(data[3]);
}

int main()
{
    uint32_t ref = 0;
    unsigned char* data = new unsigned char[4];
    data[0] = 0x1;
    data[1] = 0x2;
    data[2] = 0x3;
    data[3] = 0x4;
    
    convert(ref, data);
    std::cout << std::dec << ref << std::endl;
    
    std::cout << std::bitset<sizeof(ref) * 4>(ref) << std::endl;
    //std::cout << "Hello World!\n";
    delete[] data;
}

