#include <iostream>
#include <memory>

using namespace std;

void cinUser(unique_ptr<int>& number)
{
    int* result = number.get();
    cin >> *result;
}

void printMassive(unique_ptr<int[]>& pnumber, unique_ptr<int>& size)
{
    for(int i = 0; i < *(size.get()); i++)
    {
        cout << *(pnumber.get()+i) << " ";
    }
    cout << endl;
}

void editMassive(unique_ptr<int[]>& pnumber, unique_ptr<int>& size)
{
    for(int i = 0; i < *(size.get()); i++)
    {
        *(pnumber.get()+i) = i * i;
    }
}

int main()
{
    unique_ptr<int> psize = make_unique<int>();
    cout << *(psize.get()) << endl;
    cinUser(psize);
    cout << *(psize.get()) << endl;    

    auto pnumber = make_unique<int[]>(*(psize.get()));
    printMassive(pnumber, psize);
    editMassive(pnumber, psize);
    printMassive(pnumber, psize);    

    cout << &psize << endl;

    return 0;
}
