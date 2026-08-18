#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> v = {4, 2, 4, 5, 2, 4, 5, 2, 2, 7};
    map<int,int> m;
    unordered_map<int,int> um;
    for(auto p: v)
    {
        m[p]++;
        um[p]++;
    }
    cout<<"Ordered Map"<<endl;
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
        cout<<"UnOrdered Map"<<endl;
    for(auto p:um)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    auto res=m.find(num);
    if(res!=m.end())
    {
        cout<<"Element Found."<<endl;
        cout<<"Frequency: "<<res->second<<endl;
    }
    else{
        cout<<"Element Not Found."<<endl;
    }
    auto it=m.begin();
    int hfreq=it->second;
    int hfreqnum=it->first;
    for(;it!=m.end();it++)
    {
       if(hfreq<it->second)
       {
           hfreq=it->second;
           hfreqnum=it->first;
       }
    }
    cout<<"Number with highest frequency: "<<hfreqnum<<" by "<<hfreq<<endl;
    return 0;
}