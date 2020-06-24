#include<iostream>
#include <string>
using namespace std;

int main(){
    int n;
    char name[10];
    string completeName;
    char fullName[10];
    cin>>n;
    cin>>name; 
    // cin reads only to a space and does not reads a complete string including spaces.
    //we can use cin.getline() to read a string with spaces
    cin.getline(fullName,10);
    getline(cin,completeName);
    cout<<"n: "<<n<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"fullName: "<<fullName<<endl;
    cout<<"Complete Name: "<<completeName<<endl;
    return 0;

    /*
        

    */
}