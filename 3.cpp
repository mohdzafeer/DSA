#include <iostream>
using namespace std;

// int main()
// {
//     int i = 1;
//     int n;
//     cout << "Enter number : ";
//     cin >> n;
//     while (i <= n)
//     {
//         cout << i << endl;
//         i = i + 1;
//         /* code */
//     }
//     return 0;
// }






// -----------------SUM OF N NATURAL NUMBERS--------------

// int sum(int n)
// {
//     if ((n==1))
//     {
//         return 1;
//     }
//     else if (n<0)
//     {
//         cout<<"NO OUTPUT SORRY "<<endl;
//     }
    
//     else
//     {
//         return n+sum(n-1);
//     }

// }
// int main()
// {

//     int n;
//     cout << "Enter your number : " << endl;
//     cin >> n;
//     if (n < 0)
//     {
//         cout << "Sum of negative not defined" << endl;
//         /* code */
//     }
//     else if (n == 0)

//     {
//         cout << "Sum is zero";
//         /* code */
//     }
//     else
//     {

//         cout << "Sum of numbers till " << n << " is " << sum(n);
//         return 0;
//     }
// }



#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter Number : ";
    cin>>n;
    int i=1;
    int sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
        // break;
        /* code */
    }
    cout<<"Sum till "<<n<<" is "<<sum;
    

    return 0;
}