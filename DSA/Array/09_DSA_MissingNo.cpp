#include<iostream>
using namespace std;
int main()
{
    int a[] = {3, 0, 1};
    int n=3;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int sum_og=n*(n+1)/2;
    cout<<"Missing Number: "<<sum_og-sum<<endl;
    return 0;
}