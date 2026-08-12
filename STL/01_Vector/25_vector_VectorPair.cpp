#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,int>> x={{10,20},{30,40},{50,60}};
    for(int i=0;i<x.size();i++)
    {
           cout<<x[i].second<<" ";
    }
    return 0;
}