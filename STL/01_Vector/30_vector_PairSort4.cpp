#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<int,int>> v={ {5,2},{1,8},{5,1},{3,4}};
    sort(v.begin(),v.end(),[](auto x,auto y){
        if(x.first!=y.first)
        {
            return x.first<y.first;
        }
        else{
            return x.second>y.second;
        }
    });
    for(auto p:v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}