#include <iostream>
using namespace std;

string startChat_custom(string message)
{
    return message;
}

string startChat_defoult(string message)
{
    return "Boo! Score? Not score! I am friend";
}

void startChat_defoult_up()
{
    cout << "----------" << " Start " << "----------" << endl;
}

void startChat_defoult_down()
{
    cout << "----------" << " Wait interlocutor " << "----------" << endl;
}

string(*startChat_check(bool check))(string message)
{
    if (check == true){
        return startChat_custom;
    }
    else{
        return startChat_defoult;
    }
}