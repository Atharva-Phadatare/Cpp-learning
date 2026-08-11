#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={2,4,6,7,8,10};
    if(any_of(v.begin(),v.end(),[](int x){return x%2!=0;}))
    {
        cout<<"any one is odd"<<endl;
    }
    else{
        cout<<"All are even"<<endl;
    }
    return 0;
}