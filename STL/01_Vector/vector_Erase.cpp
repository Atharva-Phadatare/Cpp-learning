#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    v.erase(v.begin()+1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}