#include<iostream>
using namespace std;
int main()
{
    int arr[]={2, 3, 1, 2, 4, 3};
    int n=6;
    int target=7;
    int left=0;
    int sum=arr[0];
     int size;
    for(int right=1;right<n;right++)
    {
       sum+=arr[right];
       while(sum>=target)
       {
        size= right-left;
        sum-=arr[left];
        left++;
       }
    }
    cout<<size+1<<endl;
    return 0;
}