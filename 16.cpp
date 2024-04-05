#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // int p=1;

            cout << ch<<" ";
            // p=p+1;
            ch = ch + 1;
            j = j + 1;

            /* code */
        }
        cout << endl;
        cout<<endl;
        i = i + 1;

        /* code */
    }

    return 0;
}