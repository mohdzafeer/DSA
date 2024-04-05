#include <iostream>
using namespace std;
int factorial(int a)
{

    int fac = 1;
    for (int i = 1; i <= a; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int ncr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter r : ";
    cin >> r;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    cout << "factorial of " << r << " is " << factorial(r) << endl;

    cout << "nCr = " << ncr(n, r);
    return 0;
}