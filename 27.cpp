#include <iostream>
using namespace std;

int main()
{
    int n = 1330;
    int note;
    cout << "Enter the Note " << endl;
    cin >> note;
    switch (note)
    {
    case 100:
        cout << "Number of Rs.100 notes : " << n / 100;
        break;
    case 50:
        cout << "Number of Rs.50 notes : " << n / 50;
        break;
    case 10:
        cout << "Numbr of Rs. notes : " << n / 10;
        break;

    default: cout<<"Enter a valid note";
        break;
    }

    return 0;
}