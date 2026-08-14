#include<iostream>
#include<string>
#include<map>
#include<climits>
using namespace std;
int main()
{
    string word;
    cout<<"ENter word: ";
    cin>>word;
    map<char,int> m;
    for(char c: word)
    {
        m[c]++;
    }
    for(auto p:m)
    {
        cout<<p.first<<" --> "<<p.second<<endl;
    }
    int lf=INT_MAX;
    int hf=0;
    char lfreqletter='\0';
    char hfreqletter='\0';
    for(auto p:m)
    {
        if(p.second<lf)
        {
            lf=p.second;
            lfreqletter=p.first;

        }
        if(p.second>hf)
        {
            hf=p.second;
            hfreqletter=p.first;
        }
    }
    cout<<"Highest frquency is of '"<<hfreqletter<<"' of "<<hf<<" times."<<endl;
    cout<<"Lowest frquency is of '"<<lfreqletter<<"' of "<<lf<<" times."<<endl;
    return 0;
}