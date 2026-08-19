#include<iostream>
using namespace std;
int main()
{
    int a[]={4,3,2,7,8,2,3,1};
    int n=8;
    int index=0;
    for(int i=0;i<n;i++)
    {
       index=abs(a[i])-1;
       if(a[index]<0)
       {
        cout<<abs(a[i])<<" ";
       }
       else{
        a[index]=-a[index];
       }
    }
    return  0;
}