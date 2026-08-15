#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int req;
    vector<int> v = {3, 8, 4, 12, 5, 7};
    int target = 12;
    unordered_map<int,int> um;
    for(int i=0;i<v.size();i++)
    {
        req=target-v[i];
        auto it=um.find(req);
        if(it!=um.end())
        {
            cout<<i<<" "<<it->second<<endl;
        }
            um[v[i]]=i;
    }
    return 0;
}