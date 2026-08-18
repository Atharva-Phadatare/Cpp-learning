#include<iostream>
using namespace std;
int main()
{
    int a[] = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n = 10;
    int pos=0;
    for(int i=1;i<n;i++)
    {
        if(a[pos]!=a[i])
        {
            pos++;
            a[pos]=a[i];
        }
    }
    for(int i=0;i<pos+1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}