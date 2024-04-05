#include<iostream>
using namespace std;

int main()
{
    int n;
    int i=2;
    cout<<"enter your number : ";
    cin>>n;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"Number is composite"<<endl;
            /* code */
        }
        if (n%i!=0)
        {
            cout<<"Number is prime"<<endl;

            /* code */
        }
        
        i=i+1;
        /* code */
    }
    
    
    return 0;
}