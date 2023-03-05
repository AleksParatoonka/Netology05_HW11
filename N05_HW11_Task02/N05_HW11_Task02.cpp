// N05_HW11_Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include <string>
#include <windows.h>
#include "Leaver.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string input;
    std::cout << "¬ведите им§: ";
    std::cin >> input;
    Leaver leaving;
    std::cout << leaving.leave(input) << std::endl;
}