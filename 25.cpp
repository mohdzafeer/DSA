#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    switch (ch)
    {
    case 'a':
        cout << "First";
        break;
    case 'b':
        cout << "Second";
        break;
    default:
        cout << "Default case";
        break;
    }
    return 0;
}