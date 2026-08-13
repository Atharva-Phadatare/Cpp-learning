#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int largest=0;
    map<string,int> m={{"Alice",85},{"Bob",92},{"Charlie",78},{"David",92},{"Eve",85}};
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
        if(largest<p.second)
        {
            largest=p.second;
        }
    }
    cout<<"Larget is: "<<largest<<endl;
}