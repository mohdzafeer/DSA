#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    if (isprime(n) == 0)
    {
        cout << n << " is Not Prime";
    }
    else
    {
        cout << n << " is Prime ";
    }

    return 0;
}