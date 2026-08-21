#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n=5;
    int prefix[80];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
       prefix[i]=prefix[i-1]+arr[i];
    }
    int l,r;
    cout<<"ENter start and end index: ";
    cin>>l>>r;
    int insum=0;
    int outsum=0;
    if(l==0)
    {
        insum=prefix[r];
    }
    else{
        insum=prefix[r]-prefix[l-1];
    }
    outsum=prefix[n-1]-insum;
    if(insum==outsum)
    {
       cout<<"They are equal"<<endl;
    }
    else{
        cout<<"They are not equal"<<endl;
    }
    return 0;
}