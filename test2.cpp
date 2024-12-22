#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        virtual void draw() const
        {
            cout << "Good art" << endl;
        }
};

class Circle: public Shape
{
    public:
        void draw() const override
        {
            cout << "Well good art" << endl;
        }
};

class Rectangle: public Shape
{
    public:
        void draw() const override
        {
            cout << "Not good art" << endl;
        }
};

int main()
{
    Shape shape{};
    Circle circle{};
    Rectangle rect{};

    Shape* f{&shape};
    f->draw();

    f = &circle;
    f->draw();

    f = &rect;
    f->draw();

    return 0;
}
