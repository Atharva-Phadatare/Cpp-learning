#include<iostream>
#include<set>
using namespace std;
int main()
{
    int x;
    cout<<"Enter number: ";
    cin>>x;
    multiset<int> s={ 10, 20, 20, 20, 30, 30, 40, 50};
    auto res=s.find(x);
    if(res!=s.end())
    {
        cout<<"Element Exists."<<endl;
        cout<<"occurence: "<<s.count(x)<<endl;
        auto it=s.equal_range(x);
        for(auto z=it.first;z!=it.second;z++)
        {
             cout<<*z<<" ";
        }
        auto lb=s.lower_bound(x);
    auto ub=s.upper_bound(x);
    cout<<"LowerBound: "<<*lb<<endl;
    if(ub!=s.end())
    {
       cout<<"UpperBound: "<<*ub<<endl;
    }
    else{
        cout<<"Upperbound: None"<<endl;
    }
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    return 0;
}