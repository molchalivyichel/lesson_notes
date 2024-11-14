#include <iostream>
 
class Integer
{
public:
    Integer(int number)
    {
        value=number;
    }
    Integer(const Integer &p)
    {
        value = p.value;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};

int main(int argc, char const *argv[])
{
    Integer value = 10;
    Integer value_2 = value;
    value.print();
    value_2.print();
    return 0;
}
