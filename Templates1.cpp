#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template<class X> void swapArgs(X *a,X *b){
X temp;
temp= *a;
*a=*b;
*b=temp;
}

int main(){
int a=10,b=11;
cout<<"a:"<<a<<" b:"<<b<<endl;
float x=12.43,y=13.23;
cout<<"x:"<<x<<" y:"<<y<<endl;
double e=78.9,f=18.9;
cout<<"e:"<<e<<" f:"<<f<<endl;
swapArgs(&a,&b);
cout<<"a:"<<a<<" b:"<<b<<endl;
swapArgs(&x,&y);
cout<<"x:"<<x<<" y:"<<y<<endl;
swapArgs(&e,&f);
cout<<"e:"<<e<<" f:"<<f<<endl;

return 0;

}