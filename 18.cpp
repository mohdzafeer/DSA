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
        ;
        ch = ch + i - 1;
        int j = 1;
        while (j <= i)
        {
            cout << ch;
            j = j + 1;

            /* code */
        }
        cout << endl;
        i = i + 1;

        /* code */
    }

    return 0;
}