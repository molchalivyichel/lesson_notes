#include <iostream>
using namespace std;

string insert(string str)
{
    const size_t length = str.length();
    string result = "";
    for (int i = length-1; i >= 0; i--)
    {
        result += str[i];
    }
    return result;
}

int main(int argc, char const *argv[])
{
    cout << insert("Hello World") << endl;
    return 0;
}
