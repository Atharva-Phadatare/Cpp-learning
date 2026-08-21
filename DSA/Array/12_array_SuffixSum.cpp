#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5, 3, 8, 2, 9};
    int suffix[5];
    suffix[4]=arr[4];
    for(int i=3;i>=0;i--)
    {
       suffix[i]=suffix[i+1]+arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<suffix[i]<<" ";
    }
    return 0;
}