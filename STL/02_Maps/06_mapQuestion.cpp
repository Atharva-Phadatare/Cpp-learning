#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter name: ";
    cin>>name;
    map<string,int> m={{"Alice",85},{"Bob",92},{"Charlie",78},{"David",92},{"Eve",85}};
    auto res=m.find(name);
    if(res!=m.end())
    {
        cout<<"Found"<<endl;
        cout<<res->first<<" "<<res->second<<endl;
        if(res->second<80)
        {
            cout<<"Marks are less than 80."<<endl;
            cout<<"Erasing "<<name<<endl;
            m.erase(name);
        }
    }
    int largest=m["Alice"];
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
        if(largest<p.second)
        {
            largest=p.second;
        }
    }
    cout<<"Largest: "<<largest<<endl;
    return 0;
}