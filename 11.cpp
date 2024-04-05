#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENter n : ";
    cin >> n;
    int i = 0;
    int count = 1;
    while (i < n)
    {
        int j = n - i;

        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}