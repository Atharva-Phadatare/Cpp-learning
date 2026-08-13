#include<iostream>
#include<set>
using namespace std;
int main()
{
    int x;
    multiset<int> s; 
    cout<<"Enter 8 numbers: ";
    for(int i=0;i<8;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cout<<"Size: "<<s.size()<<endl;
     for(auto p:s)
    {
        cout<<p<<" ";
    }
    int num;
    cout<<"ENter Number: ";
    cin>>num;
    int occ=s.count(num);
    cout<<num<<" occured "<<occ<<" times"<<endl;
    if(occ>1)
   {
    auto res=s.find(num);
    s.erase(res);
   }
    for(auto p:s)
    {
        cout<<p<<" ";
    }
    return 0;
}