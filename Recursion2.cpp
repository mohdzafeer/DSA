#include<iostream>
using namespace std;

int powerof2(int n){
    if(n==0)
        return 1;

    return 2*powerof2(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"2^"<<n<<"="<<powerof2(n)<<endl;
    return 0;
}