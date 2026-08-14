#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int freq;
    int freqnum;
    vector<int> v= {2, 5, 2, 8, 5, 2, 8};
    map<int,int> m;
    for(int x: v)
    {
        m[x]++;
    }
    freqnum=2;
    freq=m[2];
    for(auto p:m)
    {
       if(p.second>freq)
       {
        freqnum=p.first;
        freq=p.second;
       }
    }
    cout<<"Frequent Number: "<<freqnum<<endl;
    cout<<"Frequency: "<<freq<<endl;
    return 0;
}