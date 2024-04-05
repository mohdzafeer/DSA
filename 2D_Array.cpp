#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)

        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// RowSum
void printRowSum(int arr[][4], int row, int col)
{
    cout << endl
         << "Printing Row Sum" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << "Sum of " << row + 1 << " row is : " << sum << endl;
    }
}
void printColSum(int arr[][4], int row, int col)
{
    cout << endl
         << "Printing Column Sum" << endl;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << "Sum of " << col + 1 << " row is : " << sum << endl;
    }
}



int largestrowsum(int arr[][4])
{
    int maxi = INT8_MIN;
    int rowindex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = row;
        }
    }
    cout << "The maximum row sum is : " << maxi << endl;
    return rowindex + 1;
}


// Important question of WavePrint
void wavePrint(int arr[][4], int row, int col)
{

    for (int j = 0; j < col; j++)
    {
        if (j & 1)
        {
            // for odd -> Bottom to top
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            // for even -> Top to bottom
            for (int i = 0; i < row; i++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}


// Important question of Spiral print 
void spiralPrint(int arr[][4],int row,int col)
{
//     class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {

//         vector<int> ans;

//         int row=matrix.size();
//         int col=matrix[0].size();

//         int count =0;
//         int total=row*col;

//         // idex initialization
//         int startingRow=0;
//         int startingCol=0;
//         int endingRow=row-1;
//         int endingCol=col-1;

//         while(count<total){
//             //Printing Strating Row
//             for(int i=startingCol;i<=endingCol && count<total;i++)
//             {
//                 ans.push_back(matrix[startingRow][i]);
//                 count++;
//             }
//             startingRow++;

//             // Printing ending Column
//             for(int i=startingRow;i<=endingRow && count<total;i++)
//             {
//                 ans.push_back(matrix[i][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             // Printing Ending Row
//             for(int i=endingCol;i>=startingCol && count<total;i--)
//             {
//                 ans.push_back(matrix[endingRow][i]);
//                 count++;
//             }
//             endingRow--;

//             // Printing Strating Column
//             for(int i=endingRow;i>=startingRow &&count<total;i--)
//             {
//                 ans.push_back(matrix[i][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         }
//         return ans;
//     }
// };
}



int main()
{
    // int arr[3][4]={11,12,13,14,21,22,23,24,31,32,33,34};
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // cout<<arr[2][2];

    // int arr[3][4];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)

    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    cout << "Your 2-D Array is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)

        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter target Element : ";
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element Found "<<endl;
    }
    else
    {
        cout << "Element Not Found"<<endl;
    }

    // printRowSum(arr,3,4);
    // printColSum(arr,3,4);
    // largestrowsum(arr);
    // cout<<"Row with maximum sum is : "<<largestrowsum(arr);
    wavePrint(arr, 3, 4);

    return 0;
}