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
    std::cout << "������� ��: ";
    std::cin >> input;
    Leaver leaving;
    std::cout << leaving.leave(input) << std::endl;
}