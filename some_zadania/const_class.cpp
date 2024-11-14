#include <iostream>
 
class Integer
{
public:
    Integer(int number);
    int getValue() const;
    void setValue(int number);
    void print() const;
private:
    int value;
};
Integer::Integer(int number)
{
    value=number;
    std::cout << "Object created" << std::endl;
}
int Integer::getValue()const { return value; }
void Integer::setValue(int number) { value = number; }
void Integer::print()const
{
    std::cout << "Value: " << value << std::endl;
}

int main(int argc, char const *argv[])
{
    Integer n {10};
    n.print();                      // Value: 10
    n.setValue(n.getValue() * 2);   // можно изменить
    n.print();                      // Value: 20
 
    const Integer m{50};
    //m.setValue(n.getValue() * 2);   // нельзя изменить
    std::cout << m.getValue() << std::endl; // можно только получить
    m.print();
}
