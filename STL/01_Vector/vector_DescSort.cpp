#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    vector<int> v={10,7,9,2,4};
    sort(v.begin(),v.end(),greater<int>());
    for(int x=0;x<5;x++)
    {
        cout<<v[x]<<" ";
    }
    return 0;
}