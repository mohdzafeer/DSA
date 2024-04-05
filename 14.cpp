#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n - i + 1;
        while (j <= n)
        {
            cout << n - j + 1;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}