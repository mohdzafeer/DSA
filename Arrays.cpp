#include <iostream>
using namespace std;

int main()
{
    int arr[2];

    // jab Array me same valu bharni ho to fill_n ka use krnege
    // 5 array ka size bta r hai aur 100 value bta r h jo bharni hai
    fill_n(arr, 5, 100);

    cout << arr[0];
    return 0;
}