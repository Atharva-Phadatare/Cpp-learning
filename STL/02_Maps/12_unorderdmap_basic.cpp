#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> v={2, 5, 2, 8, 5, 2, 8};
    map<int,int> m;
    unordered_map<int,int> um;
    for(int x:v)
    {
        m[x]++;
        um[x]++;
    }
    cout<<"Ordered Map:"<<endl;
    for(auto p:m)
    {
        cout<<p.first<<" -> "<<p.second<<endl;
    }
    cout<<"Unordered Map: "<<endl;
    for(auto p:um)
    {
        cout<<p.first<<" -> "<<p.second<<endl;
    }
    int freq=0;
    int freqnum=0;
    for(auto p:um)
    {
        if(p.second>freq)
        {
            freq=p.second;
            freqnum=p.first;
        }
    }
    cout<<"Highest frquency is of "<<freqnum<<" of "<<freq<<" times."<<endl;
    return 0;
}