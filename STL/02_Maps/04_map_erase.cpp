#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"ENetr name: ";
    cin>>name;
    map<string,int> marks ={ {"Alice", 85},{"Bob", 92},{"Charlie", 78},{"David", 92},{"Eve", 85}};
    auto res=marks.find(name);
    if(res!=marks.end())
    {
        string yesno;
        cout<<"Element exists."<<endl;
        cout<<"Do you want to remove it?? y/n"<<endl;
        cin>>yesno;
        if(yesno=="y")
        {
            marks.erase(name);
            cout<<"Element erased."<<endl;
            cout << "\nRemaining students:\n";

           for(auto p : marks)
            {
               cout << p.first << " " << p.second << endl;
            }
        }
    }
    else{
        cout<<"Element Not Found."<<endl;
    }
    return 0;
}