#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity is " << v.capacity();
    cout << endl;
    v.push_back(1);
    cout << "Capacity is " << v.capacity();
    cout << endl;
    v.push_back(2);
    cout << "Capacity is " << v.capacity();
    cout << endl;
    v.push_back(3);
    cout << "Capacity is " << v.capacity();
    cout << endl;
    cout << "size is " << v.size();
    cout << endl;
    cout << "element at 2nd Index " << v.at(2);
    cout << endl;
    cout << "Front " << v.front();
    cout << endl;
    cout << "back " << v.back();
    cout << endl;

    cout << "before pop ";
    cout << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    
    cout << "After pop ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.clear();
    cout<<"Size "<<v.size();
    cout<<endl;
    cout<<"Capacity "<<v.capacity();
    cout<<endl;

    vector<int> a(5,1);
    int size=a.size();
    for(int i:a)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    vector<int> last(a);
    
    for(int i:last)
    {
        cout<<last.at(i)<<" ";
    }
    return 0;
}