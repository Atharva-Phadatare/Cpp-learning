#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    vector<int> v={10,4,8,5,11};
    vector<int>::iterator x=find(v.begin(),v.end(),num);
    if(x==v.end())
    {
        cout<<"Number not found."<<endl;
    }
    else{
        cout<<"Numer found"<<endl;
    }
    return 0;
}