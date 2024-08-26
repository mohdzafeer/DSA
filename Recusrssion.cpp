#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return 1;
        
    return n * factorial(n - 1);  // Recursive call
}

int main()
{
    int n;
    cout << "Enter n : " << endl;
    cin >> n;
    cout << "Factorial of " << n << " is : " << factorial(n);
    return 0;
}