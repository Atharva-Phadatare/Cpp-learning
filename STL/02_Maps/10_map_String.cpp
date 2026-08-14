#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    string word;
    cout<<"Enter word: ";
    cin>>word;
    map<char,int> m;
    int freq=0;
    char freqletter='\0';
    for(char c: word)
    {
        m[c]++;
    }
    for(auto p:m)
    {
        cout<<p.first<<" --> "<<p.second<<endl;
    }
    for(auto p:m)
    {
        if(p.second>freq)
        {
            freq=p.second;
            freqletter=p.first;
        }
    }
     cout<<"Highest frquency is of '"<<freqletter<<"' of "<<freq<<" times."<<endl;
     return 0;
}