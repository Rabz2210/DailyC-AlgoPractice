#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template<class X>
X add(X a, X b){
    return a+b;
}

int main(){
int a=2,b=3;
float x=3.5,y=4.2;

cout<<"Integer Addition: "<<add(a,b)<<endl;
cout<<"Float Addition: "<<add(x,y)<<endl;

return 0;

}