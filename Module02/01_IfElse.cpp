#include <iostream>
using namespace std;
void OddEven();
void PosNeg();
void Max();
void Vote();
int main()
{
   int choice=0;
   for(;choice!=5;)
 {
   cout<<"1. Check Even/Odd"<<endl;
   cout<<"2. Check Positive/Negative"<<endl;
   cout<<"3. Maximum of Two Numbers"<<endl;
   cout<<"4. Voting Eligibility"<<endl;
   cout<<"5. Exit"<<endl;
   cout<<"Enter Choice: ";
   cin>>choice;

   switch(choice)
   {
     case 1: OddEven();
            break;
     case 2: PosNeg();
            break;
     case 3: Max();
            break;   
     case 4: Vote();
            break;  
     case 5: cout << "Thank you for using the program!" << endl;
            break;
    default: cout<<"Enter from given choices"<<endl;       
   }
 } 
}
void OddEven()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The number is Even"<<endl;
    }
    else{
         cout<<"The number is Odd"<<endl;
    }
    cout<<endl;
}
void PosNeg()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num!=0)
    {
       if(num>0)
       {
        cout<<"The number is positive"<<endl;
       }
       else
       {
         cout<<"The number is negative"<<endl;
        }
    }
    else{
        cout<<"The number is neither positive nor negative"<<endl;
    }
    cout<<endl;
}
void Max()
{
    int a=0;
    int b=0;
    cout<<"Enter 2 number: ";
    cin>>a>>b;
    if(a!=b)
    {
        if(a>b)
        {
            cout<<"Maximum is: "<<a<<endl;
        }
        else{
            cout<<"Maximum is: "<<b<<endl;
        }
    }
    else{
        cout<<"They are equal"<<endl;
    }
    cout<<endl;
}
void Vote()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18)
    {
        cout<<"Eligible to vote"<<endl;
    }
    else if(age<18 && age>0)
    {
        cout<<"Not Eligible to vote"<<endl;
    }
    else{
        cout<<"Input valid age"<<endl;
    }
    cout<<endl;
}

