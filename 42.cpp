#include <iostream>
using namespace std;

void intersection(int arr[], int brr[], int asize, int bsize)
{
    for (int i = 0; i < asize; i++)
    {
        int element=arr[i];
        for (int j = 0; j < bsize; j++)
        {
            if (element==brr[j])
            {
                cout<<element<<" ";
                brr[j]=INT16_MIN;
                break;
                /* code */
            }
            
            
        }
        

    }
}


int main()
{
    int arr[4] = {1, 2, 2, 4};
    int brr[4] = {2, 4, 6, 8};
    intersection(arr, brr, 4, 4);
    return 0;
}