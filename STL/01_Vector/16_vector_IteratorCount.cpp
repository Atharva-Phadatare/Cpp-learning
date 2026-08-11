#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    vector<int> v={10,11,10,10,4,4,8,5,11};
    int occ= count(v.begin(),v.end(),num);
    cout<<"occurence: "<<occ<<endl;
    return 0;
}