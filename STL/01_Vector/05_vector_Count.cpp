#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={3,4,3,3,3,5,6,1};
    int num;
    int count=0;
    cout<<"Enter number: ";
    cin>>num;
    for( int i=0;i<v.size();i++)
    {
        if(v[i]==num)
        {
           count++;
        }
    }
    cout<<"Count: "<<count<<endl;
    return 0;
}
