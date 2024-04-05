#include <iostream>
using namespace std;

// int SelectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[min] > arr[j])
//             {
//                 swap(arr[min], arr[j]);
//             }
//         }
//     }
// }

void SelectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 4, 9, 2, 5, 3};
    printarray(arr, 6);
    cout << endl;
    SelectionSort(arr, 6);
    printarray(arr, 6);
    return 0;
}