#include <iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> a={10, 7, 2, 9, 5, 1};
    int max=a[0];
    for(int i=1; i<a.size();i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
     cout<<"Max: "<<max<<endl;
    return 0;
}