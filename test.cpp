#include <iostream>
using namespace std;

int* calculate(int* a, int* b, char symbole)
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

int main(int args, char* argv[])
{
    int a = 0;
    int b = 4;
    cout << *calculate(&a,&b,'*') << endl;
    cout << max_link(a,b) << endl;
    cout << *max(&a, &b) << endl;
}
