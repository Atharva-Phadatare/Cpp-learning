#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<pair<string,int>> v={ {"Alice",85},{"Bob",92},{"Charlie",78}};
    for(auto p:v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
   return 0;
}