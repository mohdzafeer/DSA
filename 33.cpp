#include <iostream>
using namespace std;
// Fibonacci ---------> 0,1,1,2,3,5,8,13......

int fibonacci(int a)
{
    // int n;
    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "nth term of Fibonacci series is : " << fibonacci(n);
    return 0;
}