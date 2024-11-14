#include <iostream>
#include "function.h"
#include <string>
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

class Person_lite
{
private:
    string name;
    unsigned age;
public:
    Person_lite(string p_name, unsigned p_age)
    {
        name = p_name;
        if (p_age > 0 && p_age < 140){
            age = p_age;
        }
        else{
            age = 18;
        }
    }
    void print()
    {
        cout << name << " " << age << endl;
    }
    void editAge(unsigned p_age)
    {
        if(p_age > 0 && p_age < 140){
            age = p_age;
        }
    }
    void editName(string p_name)
    {
        if(p_name != ""){
            name = p_name;
        }
    }
    string getName()
    {
        return name;
    }
    unsigned getAge()
    {
        return age;
    }    
    void Start_message();
};

void Person_lite::Start_message()
{
    cout << "Hi! I`m a " << name << endl;
}

class Auto
{
    friend void drive(const Auto&);
    friend void setPrice(Auto&, unsigned);
public:
    Auto(std::string autoName, unsigned autoPrice) 
    { 
        name = autoName; 
        price = autoPrice;
    }
    void print()
    {
        std::cout << name << " : " << price << std::endl;
    }
  
private:
    std::string name;   // название автомобиля
    unsigned price;  // цена автомобиля
};
  
void drive(const Auto &car) 
{ 
    std::cout << car.name << " is driven" << std::endl;
}
void setPrice(Auto &car, unsigned price)
{
    car.price = price;
}

int main(int args, char* argv[])
{
    Person person("Dan", 9);
    person.print();

    Person_lite person_lite("Tomas", 139);
    person_lite.print();
    person_lite.editAge(20);
    person_lite.editName("");
    person_lite.print();    
    person_lite.Start_message();

    cout << "----------" << endl;

    Auto car("Audi", 200);
    drive(car);
    setPrice(car, 8000);
    car.print();
}