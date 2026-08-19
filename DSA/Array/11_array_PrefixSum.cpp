#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int arr[] = {5, 3, 8, 2, 9};
     int n=5;
     int l,r;
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    cout<<"Array: "<<endl;
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }
    cout<<"Enter start and end index respectively: ";
    cin>>l;
    cin>>r;
    int sum=0;
    if(l!=0)
    {
         sum=prefix[r]-prefix[l-1];
    }
    else{
         sum=prefix[r];
    }
    cout<<"Sum: "<<sum<<endl;    return 0;
}
