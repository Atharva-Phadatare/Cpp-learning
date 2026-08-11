#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={5,4,3,2,1};
    int max=v[0];
    int nextmax=v[1];
    for( int i=2;i<v.size();i++)
    {
        if(max<v[i])
        {
            nextmax=max;
            max=v[i];
        }
        else if(nextmax<v[i])
        {
            nextmax=v[i];
        }
    }
    cout<<"2nd max: "<<nextmax<<endl;
    return 0;
}
