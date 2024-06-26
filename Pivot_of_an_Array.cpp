#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return arr[s-1];
}
int main()
{
    int arr[5] = {3, 8, 10, 17, 2};
    cout << "Pivot Element is : " << pivot(arr, 5);

    return 0;
}