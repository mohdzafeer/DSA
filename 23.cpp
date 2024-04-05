#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    bool isprime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number ";
            isprime = 0;
            break;
            /* code */
        }
    }
    if (isprime == 0)
    {
        cout << n << " is not a Prime number ";
        /* code */
    }
    else
    {
        cout << n << " is a Prime number ";
    }

    return 0;
}