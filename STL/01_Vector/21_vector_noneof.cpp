#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>  v={2,4,6,8,10};
    if(none_of(v.begin(),v.end(),[](int z){return z%2!=0;}))
    {
        cout<<"All are even"<<endl;
    }
    else{
        cout<<"All are not even"<<endl;
    }
    return 0;
}