#include <iostream>
using namespace std;

int main()
{
    // int i=7;
    // cout<<(i++)<<endl;
    // // 7
    // cout<<(++i)<<endl;
    // // 9
    // cout<<(i--)<<endl;
    // // 9
    // cout<<(--i)<<endl;
    // // 7

    int n;
    cout << "Enter n : ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    //
    // }
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }

    return 0;
}