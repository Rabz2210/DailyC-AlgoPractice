#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Address{
    int LaneNo;
    char laneName[30];
    int flroorNo;
};

int main(){
    Address a1 = {23,"3rd main Road",0};
    cout<<"lanNo: "<<a1.LaneNo<<endl;
    cout<<"Lane Name: "<<a1.laneName<<endl;
    cout<<"Floor No: "<<a1.flroorNo;
    Address a2 = a1;
    cout<<endl<<a2.flroorNo;
    cout<<endl<<a2.laneName;
    cout<<endl<<a2.LaneNo;

    Address* a3 = &a1;
    cout<<endl<<a3->flroorNo;
    cout<<endl<<a3->laneName;
    cout<<endl<<a3->LaneNo;
    return 0;

}