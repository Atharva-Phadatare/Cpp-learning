#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<string,int>> v={ {"Alice",85},{"Bob",92},{"Charlie",78},{"David",92}};
    sort(v.begin(),v.end(),[](pair<string,int> x,pair<string,int> y){
       return x.second>y.second;
    });
    for(auto p:v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}