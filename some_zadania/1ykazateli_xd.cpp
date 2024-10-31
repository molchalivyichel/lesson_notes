#include <iostream>

//https://metanit.com/cpp/practice/8.php
int main()
{
    int f[20] = {1};

    for (unsigned i = 1; i < std::size(f); i++)
    {
        *(f+i) = *(f+i-1) + 2;
    }

    for (unsigned i = std::size(f)-1; i >= 0; i--)
    {
        if (i % 5 == 0 && i != 0){
            std::cout << std::endl;
        }
        std::cout << *(f+i) << " ";
    }
}
