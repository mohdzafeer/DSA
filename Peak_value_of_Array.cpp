#include <iostream>
using namespace std;

int peak(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = (s + e) / 2;
    }
    return arr[mid];
}

int main()
{
    int arr[6] = {1, 2, 20, 21, 3, 0};

    cout << "Peak value of Array is : " << peak(arr, 6);
    return 0;
}