#include<iostream>
using namespace std;
int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int n=6;
    int k=n;
    int temp;
    for(int i=0;i!=k;i++)
    {
        temp=a[i];
        a[i]=a[k-1];
        a[k-1]=temp;
        k--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}