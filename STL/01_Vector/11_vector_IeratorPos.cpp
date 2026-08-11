#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int index=0;
    bool isFound=false;
    int num;
    vector<int> v={10,20,30,40,50};
    vector<int>::iterator x=v.begin();
    cout<<"Enetr number: ";
    cin>>num;
    for(; x!=v.end();x++)
    {
          if(*x==num)
          {
            cout<<"Number is found at pos: "<<index<<endl;
            isFound=true;
            break;
          }
          else{
            index++;
          }
    }
    if(isFound==false)
    {
        cout<<"Number is not found"<<endl;
    }
}