#include<iostream>
using namespace std;
int main()
{
    int a[] = {4,5,6,7,1,2,3};
    int n = 7;
    int k = 3;
    k=k%n;
    int right=k-1;
    int left=0;
    while(left<right)
    {
         swap(a[left],a[right]);
         right--;
         left++;
    }
    right=n-1;
    left=k;
     while(left<right)
    {
         swap(a[left],a[right]);
         right--;
         left++;
    }
    right=n-1;
    left=0;
     while(left<right)
    {
         swap(a[left],a[right]);
         right--;
         left++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}