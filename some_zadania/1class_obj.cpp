//Создайте класс Integer с одной приватной переменной типа int. 
//Определите конструктор класса, который выводит сообщение при создании объекта. 
//Определите функции для получения и установки переменной и вывода ее значения. 
//В функции main создайте объект класса Integer и вызовите у него функции класса, получая, устанавливая и выводя значение переменной каждого объекта.
#include <iostream>
using namespace std;

class Integer
{
    private:
        int variable;
    public:
        int getVariable()
        {
            return variable;
        }
        void editVariable(int p_variable)
        {
            variable = p_variable;
        }
    Integer(int p_variable) : variable(p_variable)
    {
        cout << "Object was create!" << endl;
    }
    Integer() : variable(0)
    {
        cout << "Object was create!" << endl;
    }    
};

int main()
{
    Integer number;
    cout << number.getVariable() << endl;
    number.editVariable(100);
    cout << number.getVariable() << endl;
    return 0;
}
