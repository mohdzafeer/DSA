// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter a ";
//     cin>>a;
//     cout<<"Enter b ";
//     cin>>b;
//     if(a<b)
//     {
//         cout<<a<<" is less than "<<b;
//     }
//     else{
//         cout<<b<<" is less than "<<a;
//     }
//     return 0;
// }

// -----------EVEN AND ODD NUMBERS ---------------------

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout<<"Enter number ";
//     cin>>a;
//     if(a%2==0)
//     {
//         cout<<a<<" is an even number";
//     }
//     else
//     {
//         cout<<a<<" is an odd number";
//     }
//     return 0;
// }

// ---------------VALID TRIANGLE-----------------------

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b,c;
//     cout<<"Enter sides of the traingle\n ";
//     cin>>a;
//     cin>>b;
//     cin>>c;

//     if(a+b<c)
//     {
//         cout<<"Not a valid traingle";
//     }
//     else if(b+c<a)
//     {
//         cout<<"Not a valid traingle";
//     }
//     else if (a+c<b)
//     {
//         cout<<"Not a valid traingle";
//     }
//     else
//     {
//         cout<<"This is a valid triangle with sides "<<a<<","<<b<<","<<c;
//     }
//     return 0;
// }

// ------------------ODD NUMBERS -------------------------

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     for (int i = 0; i <= n; i++)
//     {
//         if (i%2==1)
//         {
//             cout<<i<<endl;
//             /* code */
//         }

//     }

//     return 0;
// }

// ----------------SUM OF N NATURAL NUMBERS----------------

#include<iostream>
using namespace std;

int sum(int n)
{
    if ((n==1))
    {
        return 1;
    }
    else if (n<0)
    {
        cout<<"NO OUTPUT SORRY "<<endl;
    }
    
    else
    {
        return n+sum(n-1);
    }

}

int main()
{
    int n;

    cout<<"Enter the number "<<endl;
    cin>>n;

    if (n<0)
    {
        cout<<"We are calculating sum of natural numbers right now "<<endl;
    }
    else if (n==0)
    {
        cout<<"Sum is zero";
    }
    else
    {
        cout<<"The sum of all natural numbers till "<<n<<" is "<<sum(n);
    }
    return 0;
}






// ----------WRONG CODE FOR PRIME NUMBERS------------------------


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Number " << endl;
//     cin >> n;
//     if (n <= 0)
//     {
//         cout << "Prime numbers cant be defined for negative and zero numbers";
//         /* code */
//     }
//     else if (n == 1)
//     {
//         cout << "1 is neither prime nor composite ";
//         /* code */
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             int a = i;
//             if (n % a == 0)
//             {
//                 cout << n << " is not a prime number " << endl;
//             }
//             else
//             {
//                 cout << n << " is a prime number " << endl;
//             }
//         }
//     }
//     return 0;
// }




// ---------------TYPE CASTING------------------

// #include<iostream>
// using namespace std;

// int main()
// {
    

//     char a=88;
//     cout<<a<<endl;

//     return 0;
// }


