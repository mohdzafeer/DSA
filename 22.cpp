
// -----------------Fibonacci Sries -----------
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 ............
// 0 1 1 2 3 5 8 13 21 34 55 89 ..............

#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter n : ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <=n; i++)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        /* code */
    }
    
    
    return 0;
}