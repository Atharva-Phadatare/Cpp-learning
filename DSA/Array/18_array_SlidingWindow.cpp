#include<iostream>
using namespace std;
int main()
{
    int arr[]= {2, 1, 5, 1, 3, 2};
    int n=6;
    int k=3;
    int left=0;
    int sum=2+1+5;
    int MaxSum=sum;
    for(int right=3;right<n;right++)
    { 
        sum=sum-arr[left]+arr[right];
        if(sum>MaxSum)
        {
            MaxSum=sum;
        }
         left++;
    }
    cout<<MaxSum<<endl;
    return 0;
}