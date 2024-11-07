#include <iostream>
using namespace std;

string startChat_custom(string);
string startChat_defoult(string message);
void startChat_defoult_up();
void startChat_defoult_down();
string(*startChat_check(bool check))(string message);