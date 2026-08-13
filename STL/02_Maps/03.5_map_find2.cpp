#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter name: ";
    cin>>name;
    map<string,int> marks={{"Alice",85},{"Bob", 85},{"Charlie", 78},{"David", 92}};
    map<string,int>::iterator res=marks.find(name);
    if(res!=marks.end())
    {
        cout<<"Found"<<endl;
        cout<<res->first<<" "<<res->second<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}