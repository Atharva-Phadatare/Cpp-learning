#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    vector<int>::iterator x=v.begin();
    while(x!=v.end())
    {
       cout<<*x<<" ";
       x++;
    }
}