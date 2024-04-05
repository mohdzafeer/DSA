// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<i;
//             j=j+1;
//             /* code */
//         }
//         cout<<endl;
//         i=i+1;
//         /* code */
//     }
    
    
    
//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n ";
    cin>>n;
    int i=0;
    while (i<n)
    {
        int j=n-i;
        while (j<=n)
        {
            cout<<i+1;
            j=j+1;
            /* code */
        }
        cout<<endl;
        i=i+1;
        /* code */
    }
    
    return 0;
}