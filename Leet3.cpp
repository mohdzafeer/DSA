#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int answer = 0;

    while (n != 0)
    {
        if ((answer>INT_MAX/10)||(answer <INT_MIN/10))
        {
            cout<<0;
            
        }
        
        int digit = n % 10;
        answer = (answer * 10) + digit;
        n = n / 10;
    }
    cout << answer;

    return 0;
}