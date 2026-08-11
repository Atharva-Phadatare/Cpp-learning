#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={8, 3, 10, 1, 6, 4};
    vector<int>::iterator x=v.begin();
    sort(v.begin(),v.end());
    for(;x!=v.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}