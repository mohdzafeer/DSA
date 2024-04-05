#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout<<"Printing Array "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    cout<<"Printing done "<<endl;
    
}

int main()
{
    // Decalring
    int number[15];

    // Accesing an Array
    cout<<"Value at 14 index "<<number[14]<<endl;

    // Intialising an Array
    int second[3]={5,7,11};

    cout<<"Vaue at 2 index is "<<second[2]<<endl;

    int third[15]={2,7};

    int n=15;
    printarray(third,15);
    int thirdsize =sizeof(third)/sizeof(int);


    // Intialising all locations with 0
    int fourth[10]={0};

    n=10;
    printarray(fourth,10);


    int fifth[10]={1};
    printarray(fifth,10);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout<<"Size of fifth is "<<fifthsize<<endl;


    char ch[5]={'a','b','c','d','e'};
    cout<<"second index character is "<<ch[2];
    cout<<"Printing the array "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<ch[i]<<" ";
        /* code */
    }


    double firstdouble[5];
    float firstfloat[3];
    bool firstbool[5];
    
    return 0;
}