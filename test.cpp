#include <iostream>
#include "function.h"
using namespace std;

void print(int* numbers, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(numbers+i) << " ";
    }
    cout << endl;
}

int main(int args, char* argv[])
{
    int size = 10;
    int *numbers = new int[size];
    print(numbers, size);

    size = 20;
    print(numbers, size);    

    delete [] numbers;
    numbers = nullptr;
    return 0;
}