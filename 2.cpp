// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter your numbers : "<<endl;
//     cin>>a;
//     cin>>b;

//     bool first = (a==b);
//     cout<<first<<endl;

//     return 0;
// }





// ------------------------------PRIME AND COMPOSITE--------------------------

#include <iostream>
using namespace std;

int main()
{
    int n, c = 0;
    cout << "Enter your Number : " << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << n << " is prime number ";
    }

    else
    {

        cout << n << " is a composite number " << endl;
    }

    return 0;
}








