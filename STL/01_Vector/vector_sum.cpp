#include <iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> a={10, 7, 2, 9, 5, 1};
    int sum =0;
    for(int i=0; i<a.size();i++)
    {
        sum+=a[i];
    }
     cout<<"Sum: "<<sum<<endl;
    return 0;
}