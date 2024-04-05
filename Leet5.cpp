// Q : Power of
// Eg : 8 ---> True
//  7 ---> False

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int ans=1;
    
    for (int i = 0; i <=30; i++)
    {
        int ans=ans*2;
        if (ans==n)
        {
            cout<<"True";
            /* code */
        }
        else{
            cout<<"False";
        }
        
        /* code */
    }
    
    

    
}


