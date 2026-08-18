#include<iostream>
using namespace std;
int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int i=0;
    int x = a[i];
    while(i+1!=n)
    {
        a[i]=a[i+1];
        i++;
    }
    a[i]=x;
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}