#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(30);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    cout<<"Finding Number "<<binary_search(v.begin(),v.end(),10)<<endl;

    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;


    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }

    return 0;
}