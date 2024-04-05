#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
            /* code */
        }
        n = n >> 1;
        /* code */
    }
    cout<<count;
    return 0;
}
