#include<iostream>
using namespace std;
int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int k = 2;
  for(;k!=0;k--)
  {
    int i=0;
    int x=a[i];
    while(i<n-1)
    {
        a[i]=a[i+1];
        i++;
    }
    a[i]=x;
  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}