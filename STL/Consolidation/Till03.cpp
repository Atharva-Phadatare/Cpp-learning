#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v = {5, 2, 8, 2, 5, 9, 2, 8, 4, 5};
    sort(v.begin(),v.end());
    set<int> s;
    map<int,int> m;
    pair<int,int> h;
    for(int x:v)
    {
        s.insert(x);
    }
    for(auto p:v)
    {
        m[p]++;
    }
    cout<<"Unique Vallues: "<<endl;
    for(auto p:s)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    cout<<"Frequency Table: "<<endl;
    int hf=0;
    int hfnum=0;
    for(auto p:m)
    {
        cout<<p.first<<" -> "<<p.second<<endl;
        if(hf<p.second)
        {
            hf=p.second;
            hfnum=p.first;
        }
    }
    h.first=hfnum;
    h.second=hf;
    cout << "Highest frequency pair: "<< h.first << " " << h.second << endl;
    sort(v.begin(),v.end(),[](int x,int y){
           return x>y;
    });
     cout<<"Vector in Descending order: "<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}