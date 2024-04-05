// #include<iostream>
// using namespace std;

// int insertionsort(int arr[],int n){
//     for(int j=1;j<n;j++)
//     {
//         int current=arr[j];
//         int i=j-1;
//         for(;i>=0;i--)
//         {
//             if(current<arr[i])
//             {
//                 arr[i+1]=arr[i];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[i+1]=current;
//     }
// }
// // int insertionsort(int arr[], int n)
// // {
// //     for (int i = 1; i < n; i++)
// //     {
// //         int temp = arr[i];
// //         int j = i - 1;
// //         for (; j >= 0; j--)
// //         {
// //             if (arr[j] > temp)
// //             {
// //                 // shift
// //                 arr[j + 1] = arr[j];
// //             }
// //             else
// //             {
// //                 // ruk jana hai
// //                 break;
// //             }
// //         }
// //         arr[j + 1] = temp;
// //     }
// // }
// int printarray(int arr[],int n){
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr[5]={2,5,3,1,4};
//     printarray(arr,5);
//     insertionsort(arr,5);
//     printarray(arr,5);
//     return 0;
// }

#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] > arr[j];
            }
            else
            {
                break;
            }
        }
        temp=arr[j+1];
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    printarray(arr, 5);
    insertionsort(arr, 5);
    printarray(arr, 5);
    return 0;
}