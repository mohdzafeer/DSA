// #include <iostream>
// using namespace std;

// int reversearray(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s < e)
//     {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// }

// int printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     printarray(arr, 6);
//     reversearray(arr, 6);
//     printarray(arr, 6);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);

    vector<int> ans = reverse(v);

    print(ans);

    return 0;
}