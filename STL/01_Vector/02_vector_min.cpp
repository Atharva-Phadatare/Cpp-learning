#include <iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> a={10, 7, 2, 9, 5, 1};
    int minimum =a[0];
    for(int i=1; i<a.size();i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];
        }
    }
     cout<<"Minimum: "<<minimum<<endl;
    return 0;
}