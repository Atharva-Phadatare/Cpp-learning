#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={2, 5, 2, 8, 5, 2, 8};
    map<int,int> m;
    for(int x:v)
    {
        m[x]++;
    }
    for(auto p:m)
    {
        cout<<p.first<<"->"<<p.second<<endl;
    }
    return 0;
}