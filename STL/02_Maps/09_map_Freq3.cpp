#include<iostream>
#include<vector>
#include<map>
#include<climits>
using namespace std;
int main()
{
    vector <int> v= {4, 2, 4, 5, 2, 4, 5, 2, 2, 7};
    map<int,int> m;
    for(int x:v)
    {
        m[x]++;
    }
    for(auto p:m)
    {
        cout<<p.first<<" -> "<<p.second<<endl;
    }
    int lf=INT_MAX;
    int hf=0;
    int lfreqnum=0;
    int hfreqnum=0;
    for(auto p:m)
    {
        if(p.second<lf)
        {
            lf=p.second;
            lfreqnum=p.first;

        }
        if(p.second>=hf)
        {
            hf=p.second;
            hfreqnum=p.first;
        }
    }
    cout<<"Highest frquency is of "<<hfreqnum<<" of "<<hf<<" times."<<endl;
    cout<<"Lowest frquency is of "<<lfreqnum<<" of "<<lf<<" times."<<endl;
    return 0;
}