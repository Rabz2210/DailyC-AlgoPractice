#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Employee{
    char name[20];
    int rollNo;
    int EmployeeNumber;
};

int main(){
    Employee e1 = {"Rabbani",123,456};
    cout<<"EmpName: "<<e1.name<<endl;
    cout<<"rollNo: "<<e1.rollNo<<endl;
    cout<<"EmployeeNumber: "<<e1.EmployeeNumber;

    Employee* e2 = &e1;
    cout<<e2->name;

    return 0;
}