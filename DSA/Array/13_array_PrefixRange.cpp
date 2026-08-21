#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,3,8,2,9};
    int prefix[5];
    prefix[0]=arr[0];
    for(int i=1;i<5;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    int l,r;
    cout<<"Enter start and end index: ";
    cin>>l>>r;
    int sum=0;
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