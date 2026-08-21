#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,1,4,2,5};
    int n=5;
    int l,r;
    cout<<"Enter Query:(start,end): ";
    cin>>l>>r;
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    int sum;
    if(l==0)
    {
        sum=prefix[r];
    }
    else{
        sum=prefix[r]-prefix[l-1];
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}