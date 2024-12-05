#include<iostream>
using namespace std;


void bubbleSort(int *arr,int n){
    if(n==0 || n==1){
        return;
    }    

    for(int i=0;i<n;i++){
        if((arr[i])>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,n-1);
}

int main()
{
    // BUBBLE SORT
    int arr[100];
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Old Array"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted Array "<<endl;
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}