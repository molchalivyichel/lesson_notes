#include <iostream>
#include "function.h"
using namespace std;

extern bool check;
extern string message;

int main(int args, char* argv[])
{
    startChat_defoult_up();
    string(*action)(string message) = startChat_check(check);
    cout << action(message) << endl;
    startChat_defoult_down();

    check = true;

    startChat_defoult_up();
    action = startChat_check(check);
    cout << action(message) << endl;
    startChat_defoult_down();
}