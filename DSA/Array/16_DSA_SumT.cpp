#include<iostream>
using namespace std;
int main()
{
    int arr[]={2, 4, 1, 5, 3};
    int n=5;
    int prefix[80];
    int suffix[80];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]+arr[i];
    }
    bool isFound=false;
    int num;
    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            continue;
        }
        if(prefix[i-1]==suffix[i+1])
        {
            num=i;
            isFound=true;
            break;
        }
    }
    if(isFound)
    {
        cout<<num<<" Satisfies condition."<<endl;
    }
    else{
        cout<<"Conditions Not Met."<<endl;
    }
    return 0;
}