#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1)
        return n;

    return fibonacci(n-1)+fibonacci(n-2);    
}

// 0 1 1 2 3 5 8 13 21 34
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}