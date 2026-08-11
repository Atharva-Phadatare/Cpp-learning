#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={10,11,10,10,4,4,8,5,11};
    vector<int>::iterator maximum=max_element(v.begin(),v.end());
    vector<int>::iterator minimum=min_element(v.begin(),v.end());
    cout<<"Maximum: "<<*maximum<<endl;
    cout<<"Minimum: "<<*minimum<<endl;
    return 0;
}