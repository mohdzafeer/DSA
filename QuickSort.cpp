#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){

    int pivot=arr[s];

    int count=0;
    for (int i = s+1; i <= e; i++){   
        if(arr[i]<pivot){
            count++;
        }
    }

    // placing pivot at right position
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    
    // left and right part
    int i=s,j=e;
    while (i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if( i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }

        
        
    }
    
}

void QuickSort(int *arr,int s,int e){
    // Base Case
    if(s>=e)
        return;

    // Partition
    int p=partition(arr,s,e);

    // Left Part
    QuickSort(arr,s,p-1);

    // Right Part
    QuickSort(arr,p+1,e);


}

int main()
{
    int arr[7]={9, 9, 9, 8, 2, 3, -6  };
    int n=7;

    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
    }
    return 0;
} 