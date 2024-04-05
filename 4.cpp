#include<iostream>
using namespace std;

// Sum of Even Numbers
// 0   2   4   6   8   10
//  2    6   12  20  30 
 
int main()
{
    int n;
    cout<<"Enter your Number ";
    cin>>n;
    int sum=0;
    int i=0;
    while(i<=n)
    {
        
        // cout<<"sum is "<<sum<<endl;
        sum=sum+i;
        i=i+2;
    }
    cout<<"Sum of Even Numbers till "<<n<<" is "<<sum<<endl;
    return 0;
}



// Sum of n natural numbers
// 0 1 2 3 4 5 6 ............
//  1 3 6 10 15 .............
// 0+1=1
// 1+2=3
// 3+3+6
// 6+4+10
// 10+5=15


// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter Your Number ";
//     cin>>n;
//     int sum=0;
//     int i=1;
//     while (i<=n)
//     {
//         /* code */
//         // cout<<"Sum is "<<sum<<endl;
//         sum=sum+i; 
//         i=i+1;
        
//     }
//     cout<<"Sum is "<<sum<<endl;
//     return 0;
// }
