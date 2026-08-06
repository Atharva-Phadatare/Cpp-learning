#include<iostream>
using namespace std;
int main()
{
    int num,num_og;
    int rev=0;
    cout<<"Enter number: ";
    cin>>num;
    num_og=num;
    
    while(num!=0)
    {
       rev = rev*10 + (num%10);
       num=num/10;
    }
    if(num_og==rev)
    {
        cout<<"It is Palindrome"<<endl;
    }
    else{
        cout<<"It is not Palindrome"<<endl;
    }
    return 0;
}