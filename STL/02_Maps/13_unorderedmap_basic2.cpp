#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={4, 2, 4, 5, 2, 4, 5, 2, 2, 7};
    map<int,int> m;
    unordered_map<int,int> um;
    for(int x:v)
    {
        m[x]++;
        um[x]++;
    }
    cout<<"Ordered Map"<<endl;
    for(auto p:m)
    {
        cout<<p.first<<" --> "<<p.second<<endl;
    }
    cout<<"Unordered Map"<<endl;
     for(auto p:um)
    {
        cout<<p.first<<" --> "<<p.second<<endl;
    }
    int num;
    cout<<"Enter number: ";
    cin>>num;
    auto res=um.find(num);
    if(res!=um.end())
    {
        cout<<"Element exists."<<endl;
        um.erase(num);
        cout<<"Element removed."<<endl;
    }
    else{
        cout<<"Element does not exist."<<endl;
    }
    cout << "Count: " << um.count(num) << endl;
     for(auto p:um)
    {
        cout<<p.first<<" --> "<<p.second<<endl;
    }
    int freq=0;
    int freqnum=0;
    for(auto p:m)
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