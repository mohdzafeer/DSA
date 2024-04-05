#include <iostream>
using namespace std;

int movezeroes(int arr[], int n)
{

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
        
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {3, 0, 4, 0, 1, 0};
    // Output----> {3,4,1,0,0,0}
    /*
    swaping ---> {3,4,0,1,0,0}
            ---> {3,4,1,0,0,0}
    */

    print(arr,6);
    movezeroes(arr, 6);
    print(arr, 6);

    return 0;
}