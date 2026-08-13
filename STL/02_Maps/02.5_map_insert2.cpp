#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> marks;
    marks.insert({"Alice",85});
    marks.insert({"Bob",95});
    marks.insert({"Charlie",80});
    auto result=marks.insert({"Alice",100});
    if(!result.second)
    {
        cout<<"ALready Exists"<<endl;
        cout<<result.first->first<<" "<<result.first->second<<endl;
    }
    return 0;
}