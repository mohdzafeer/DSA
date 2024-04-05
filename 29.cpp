#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter Amount ";
    cin >> amount;
    int R100, R50, R20, R1;

    switch (1)
    {
    case 1:
        R100 = amount / 100;
        cout << "Number of Rs.100 Notes : " << R100 << endl;
        amount = amount % 100;

    case 2:
        R50 = amount / 50;
        cout << "Number of Rs.50 Notes : " << R50 << endl;
        amount = amount % 50;

    case 3:
        R20 = amount / 20;
        cout << "Number of Rs.20 Notes : " << R20 << endl;
        amount = amount % 20;

    case 4:
        R1 = amount / 1;
        cout << "Number of Rs.1 Notes : " << R1 << endl;
        amount = amount % 1;
    }
    return 0;
}