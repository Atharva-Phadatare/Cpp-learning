#include<iostream>
using namespace std;
int main()
{
    int a[] = {0, 1, 0, 3, 12, 0, 5};
    int n = 7;
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[pos]=a[i];
            pos++;
        }
    }
    while(pos!=n)
    {
        a[pos]=0;
        pos++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}