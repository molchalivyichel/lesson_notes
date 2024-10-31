#include <iostream>

int main()
{
    int f[20] = {1};

    for (unsigned i = 1; i < std::size(f); i++)
    {
        *(f+i) = *(f+i-1) + 2;
    }

    const int *pf = f;
    for (unsigned i = 0; i < std::size(f)-1; i++)
    {
        if (i % 5 == 0 && i != 0){
            std::cout << std::endl;
        }
        std::cout << *pf++ << " ";
    }
    std::cout << *pf << std::endl;

    std::cout << "--------------------------" << std::endl;

    for (unsigned i = std::size(f)-1, g = 0; i > 0; i--, g++)
    {
        if (g % 5 == 0 && g != 0){
            std::cout << std::endl;
        }
        std::cout << *(pf--) << " ";
    }
    std::cout << *pf << std::endl;

    return 0;
}
