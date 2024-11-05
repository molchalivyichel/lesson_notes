#include <iostream>
using namespace std;
using Russia = char(*)[10];
using BinaryOp = int (*)(int, int);

int* calculate(int* a, int* b, char symbole = '0')
{
    int* result = new int(0);
    if (symbole == '+'){
        cout << "+" << endl;
        *result = *a + *b;
    }
    else if (symbole == '-'){
        cout << "-" << endl;
        *result = *a - *b;
    }
    else if (symbole == '*'){
        cout << "*" << endl;        
        *result = *a * *b;
    }
    else if (symbole == '/'){
        cout << "/" << endl;
        *result = *a / *b;
    }
    return result;
}

int& max_link(int& a, int& b)
{
    if (a > b) 
        return a;
    else
        return b;
}

int* max(int *a, int *b){
    return b;
}

void log(string message)
{
    cout << message << endl;
}

void log(string message, string message_to)
{
    cout << message << endl;
    cout << message_to << endl;
}

Russia Goida()
{
    char goida[10] = "Goiiiiida";
    return &goida;
}


int main(int args, char* argv[])
{
    cout << *Goida << endl;
}