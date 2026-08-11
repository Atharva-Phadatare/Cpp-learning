#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={4,4,8,5,11};
   reverse(v.begin(),v.end());
    for(int x=0;x<v.size();x++)
    {
        cout<<v[x]<<" ";
    }
    return 0;
}