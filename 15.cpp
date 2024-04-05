#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ente n : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            char ch = 'A' + j + i - 2;
            // char count = 'A';
            cout << ch << " ";
            j = j + 1;
            // count =count +1;
            /* code */
        }
        cout << endl;
        i = i + 1;
        /* code */
    }

    return 0;
}