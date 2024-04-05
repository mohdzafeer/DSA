// Q : complemen tof number

// i/p : 5 --> 101 (Binary) Complement --> 010 --> 2 (decimal)

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter n : ";
    cin >> m;
    int n=m;
    int mask = 0;
    if (n == 0)
    {
        cout<<1;
    }
    else
    {

        while (n != 0)
        {
            mask = (mask << 1) | 1;
            n = n >> 1;
        }
    }
    int ans = (~n) & mask;

    cout << ans;
    // return 0;
}

// ------------Code NOT Working--------------