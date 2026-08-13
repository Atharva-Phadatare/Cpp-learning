#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int> marks = {{"Alice",95},{"Bob",85},{"Charlie",78}};
    string name;
    cout<<"Enter name: ";
    cin>>name;
    auto x=marks.find(name);
    if(x!=marks.end())
    {
        cout<<"Found"<<endl;
        cout<<x->first<<" "<<x->second<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}