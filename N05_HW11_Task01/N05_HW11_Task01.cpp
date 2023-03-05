// N05_HW11_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "myGreet.h"
#include <cstring>
#include <string>
#include <windows.h>

int main()
{
    //SetConsoleCP(CP_UTF8);
    //SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string input;
    std::cout << "¬ведите им€: ";
    std::cin >> input;
    myGreet::Greeter greeting;
    std::cout << greeting.greet(input)<<std::endl;
}

