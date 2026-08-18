#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v = {4, 2, 7, 2, 4, 9, 2, 7, 5, 4};
    cout<<"Vector is"<<endl;
    for(auto p:v)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"Sorted Vector."<<endl;
    for(auto p:v)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    cout<<"Reverse Vector."<<endl;
    for(auto p:v)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    auto it=find(v.begin(),v.end(),7);
    if(it!=v.end())
    {
        cout<<"Element exist."<<endl;
    }
    else{
        cout<<"Element does not exist"<<endl;
    }
    cout<<"4 occurs: "<<count(v.begin(),v.end(),4)<<endl;
    cout<<"Max element: "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Min element: "<<*min_element(v.begin(),v.end())<<endl;
    return 0;
}