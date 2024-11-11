#include <iostream>

using namespace std;

void cinUser(int* number)
{
    cin >> *number;
}

void printMassive(int* massive, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(massive+i) << " ";
    }
    cout << endl;
}

void editMassive(int* massive, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(massive+i) = i*i;
    }
}

int sumMassive(int* massive, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += *(massive+i);
    }
    return sum;
}

int main()
{
    int size = 0;
    cinUser(&size);
    
    int* numbers = new int[size];
    editMassive(numbers, size);
    printMassive(numbers, size);
    cout << "Sum: " << sumMassive(numbers, size) << endl;

    return 0;
}
