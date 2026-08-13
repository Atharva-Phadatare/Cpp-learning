#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string, int> marks;
    marks["Alice"]=95;
    marks["Bob"]=85;
    marks["Charlie"]=78;

    cout<<marks["Bob"];
    return 0;
}