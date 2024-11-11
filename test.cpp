#include <iostream>
#include "function.h"
using namespace std;

class Person
{
    private:
        const string name;
        int age;
    public:
        void print()
        {
            cout << name << " " << age << endl;
        }
    Person(string p_name, int p_age) : name(p_name), age(p_age)
    {
        cout << "Create class" << endl;
    }
};

int main(int args, char* argv[])
{
    Person person("Dan", 9);
    person.print();
}