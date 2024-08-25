#include<iostream>
using namespace std;


int getSum(int *arr,int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    // Dynamic Memory Allocation
    // Heap Memory

    char ch='q';
    // cout<<sizeof(ch)<<endl;

    char* c=&ch;
    // cout<<sizeof(c); 


    int* ptr = new int; // Dynamically allocate memory for an integer
    *ptr = 10; // Assign a value to the allocated memory




    int n;
    cout<<"Enter size of array : "<<endl;
    cin >> n;

    // variable size Arry
    int *arr=new int [n];

    cout<<"Enter Elements of Array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Sum of elemnets of array is : "<<getSum(arr,n)<<endl;





    return 0;
}