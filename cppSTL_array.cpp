#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "element at 2nd index is " << a.at(2);
    cout << endl;
    cout << "empty or not " << a.empty();
    cout << endl;
    cout << "First Element is " << a.front() << endl;
    cout << "Last Elelment is " << a.back() << endl;
    return 0;
}