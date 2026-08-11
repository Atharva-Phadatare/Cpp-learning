#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    bool isFound=false;
    int a,b;
    vector<int> v={1,9,11,7,2};
    auto x=v.begin();
    auto y=v.begin()+1;
    int target=9;
    while(x!=v.end())
    {
        for(;y!=v.end();y++)
        {
           if(*x+*y==target)
           {
            int a=x-v.begin();
            int b=y-v.begin();
            cout<<"["<<a<<","<<b<<"]";
            isFound=true;
            break;
           }
        }
        if(isFound)
        {
            break;
        }
        else{
        x++;
        y=x+1;
        }
    }
    return 0;
}
