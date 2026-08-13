#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s={10,20,30,40,50};
    int num,rep;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter replacement: ";
    cin>>rep;
    auto res=s.find(num);
    if(res!=s.end())
    {
        s.erase(num);
        s.insert(rep);
        cout<<"Number was found and replaced."<<endl;
    }
    else{
        cout<<"Number was not found."<<endl;
    }
    for(auto p:s)
    {
        cout<<p<<" ";
    }
    return 0;
}