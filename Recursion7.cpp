#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main()
{
    int arr[5]={0,1,2,4,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    if(isSorted(arr,size)){
        cout<<"Array is sorted in ascending order."<<endl;
    }
    else{
        cout<<"Array is not sorted in ascending order."<<endl;
    }
    return 0;
}
