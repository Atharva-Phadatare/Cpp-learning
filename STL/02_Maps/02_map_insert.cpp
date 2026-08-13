#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> marks;
    marks.insert({"Alice",90});
    marks["Bob"]=85;
    marks.insert({"Alice",100});
    cout<<marks["Alice"]<<endl;
    cout<<marks["Bob"]<<endl;
    return 0;
}