#include <iostream>
using namespace std;

double pow(double number, int n)
{
    double result = 1;

    if (n >= 0){
        for (int i = 1; i <= n; i++)
        {
            result *= number;
        }
    }
    else
    {
        for (int i = 1; i <= -n; ++i)
        {
            result /= number;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    cout << pow(3.1, 0) << endl;
    return 0;
}
