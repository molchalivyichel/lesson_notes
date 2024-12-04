#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal(string _name, unsigned int _mass) : name(_name), mass(_mass) {}
        void print() const
        {
            cout << name << " " << mass << " kg" << endl;
        }
    private:
        string name;
        unsigned int mass;
};

class Cat : public Animal
{
    private:
        unsigned int age;
    public:
        Cat(string _name, unsigned int _mass,unsigned int _age) : Animal(_name, _mass), age(_age) {}
        Cat(string _name, unsigned int _mass) : Animal(_name, _mass) {}
};

int main()
{
    Animal animal{"masa",30};
    animal.print();
    Cat masynau{"masynau", 5, 2};
    masynau.print();
    return 0;
}