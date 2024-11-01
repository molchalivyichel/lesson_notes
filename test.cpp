#include <iostream>
using namespace std;

auto print(auto a, auto b)
{
    cout << a + b << endl;

    return a + b;
}

int main()
{
    cout << print("a",8) << endl;
}
