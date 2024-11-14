#include <iostream>

using namespace std;

class Integer
{
public:
    friend int compare(const Integer &integer, const Integer &integer2);

    Integer(int number)
    {
        value=number;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};

int compare(const Integer &integer, const Integer &integer2)
{
    int result = integer.value - integer2.value;
    return (integer.value - integer2.value > 0) ? integer.value - integer2.value : integer.value - integer2.value;
}

int main(int argc, char const *argv[])
{
    Integer number = 10;
    Integer number2 = 101;
    cout << compare(number, number2) << endl;
    return 0;
}
