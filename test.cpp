#include <iostream>

//g++ main.cpp logger.cpp -o my_program
//or
//g++ *.cpp -o my_program

void Log(char const* message);

int main()
{
    Log("Message");
    std::cout << "p" << std::endl;
    std::cout << "p2" << std::endl;
    return 0;
}
