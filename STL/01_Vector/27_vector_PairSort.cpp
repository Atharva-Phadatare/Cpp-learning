#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<int,int>> v={ {3,100},{1,200},{2,150},{1,50}};
    sort(v.begin(),v.end());
    for(auto p:v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}