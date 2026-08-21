#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,3,2,1};
    int n=6;
    int freq[80]={};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    int cum[80];
    cum[1]=freq[1];
    for(int i=2;i<n;i++)
    {
         cum[i]=cum[i-1]+freq[i];
    }
    for(int i=1;i<4;i++)
    {
        cout<<cum[i]<<" ";
    }
    return 0;
}    