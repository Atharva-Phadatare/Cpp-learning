#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    int sum;
    vector<int> v={5, 10, 15, 20, 25};
    sum=accumulate(v.begin(),v.end(),0);
    cout<<"SUm: "<<sum<<endl;
    return 0;
}