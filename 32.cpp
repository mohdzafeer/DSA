#include<iostream>
using namespace std;
int nth_term(int n )
{
    return ((3*n) + 7);
}

int main()
{
    int n ;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"nth term is : "<<nth_term(n);
    return 0;
}