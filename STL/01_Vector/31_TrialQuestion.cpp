#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<string,int>> v={{"Alice",85},{"Bob",92},{"Charlie",78},{"David",92},{"Eve",85}};
    sort(v.begin(),v.end(),[](auto x,auto y){
        if(x.second!=y.second)
        {
            return x.second<y.second;
        }
        else{
            return x.first<y.first;
        }
    });
    for(auto p:v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}