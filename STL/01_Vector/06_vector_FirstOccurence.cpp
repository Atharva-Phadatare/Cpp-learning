#include<iostream>
#include<vector>
using namespace std;
int main()
{
    bool isFound=false;
    vector<int> v={5,4,3,2,1};
    int num;
    cout<<"Enter number: ";
    cin>>num;
    for( int i=0;i<v.size();i++)
    {
        if(v[i]==num)
        {
            cout<<"found at index: "<<i<<endl;
            isFound=true;
            break;
        }
    }
    if(isFound==false)
    {
        cout<<"Not Found"<<endl;
    }
    return 0;
}
