#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 10, 30, 20, 40, 30, 50};
    set<int> s;
    pair<int,int> m;
    for(int x: v)
    {
        s.insert(x);
    }
    cout<<"Unique Values: "<<endl;
    for(auto p: s)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    auto it=s.begin();
    m.first=*it;
        auto res=s.find(30);
        if(res!=s.end())
        {
            cout<<"30 Found."<<endl;
        }
        else{
            cout<<"30 Not Found"<<endl;
        }
    auto it=s.end();    
    it--;
    m.second=*it;
    cout<<"Pair is: "<<m.first<<" "<<m.second<<endl; 
    return 0;
}