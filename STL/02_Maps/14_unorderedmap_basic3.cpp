#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
   unordered_map<string,int> um={{"Alice", 85},{"Bob", 92},{"Charlie", 78},{"David", 92},{"Eve", 85}};
   string name;
   cout<<"Enter name: ";
   cin>>name;
   auto res=um.find(name);
   if(res!=um.end())
   {
    cout<<"Element Found."<<endl;
    cout<<"Name: "<<res->first<<endl;
    cout<<"Marks: "<<res->second<<endl;
    if(res->second<80)
    {
        um.erase(res);
    }
   }
   else{
    cout<<"ELement Not Found"<<endl;
   }
   int x=um.count(name);
   if(x)
   {
    cout<<"Element still exists."<<endl;
   }
   else{
    cout<<"Element Erased"<<endl;
   }
   for(auto p: um)
   {
    cout<<p.first<<" "<<p.second<<endl;
   }
   return 0;
}