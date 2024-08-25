#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter col : ";
    cin>>col;
    
    int **arr=new int*[row];


    // creating 2D array
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    
    // input elements
    cout<<"Enter elements of Array : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    
    
    // Printing Array
    cout<<"2d Array is : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    // releasing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete [] arr;
    
    return 0;
}