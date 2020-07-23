#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define arrayLength(array) (sizeof((array))/sizeof((array)[0]))

template <typename T, size_t n> 
T findSize(T (&arr)[n]) 
{ 
     
} 
int main(){
    int Intary[] = {1,2,3,4,5,6,7,8,9};
    float floatAry[] =  {2.3,5.5,5.2};
    string names[] = {"rabbani","Mohammad"};
    cout<<"int lengthn"<<arrayLength(Intary)<<endl;
    cout<<"float length"<<arrayLength(floatAry)<<endl;
    cout<<"String length"<<arrayLength(names)<<endl;
    return 0;

}