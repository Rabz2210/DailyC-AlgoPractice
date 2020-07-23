#include<iostream>
#include<bits/stdc++.h>

#define arrayLength(array) (sizeof((array))/sizeof((array)[0]))

using namespace std;
template<class X>
X* GenericBubbleSort(X ary[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ary[i]>ary[j]){
                X temp = ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
            }
        }
    }
    return ary;
}

int main(){
    int iary[] = {6,5,4,3,2,1};
    float fary[] = {6.5,4.1,3.2,6.3,7.1};
    int iaryLength = sizeof(iary)/sizeof(iary[0]);
    float faryLength = sizeof(fary)/sizeof(fary[0]);
    int* irary = GenericBubbleSort(iary,iaryLength);
    float* frary = GenericBubbleSort(fary,faryLength);



    cout<<endl<<arrayLength(frary);
    cout<<"Integer Sorted ";

    for(int i=0;i<iaryLength;i++){
        cout<<irary[i]<<" ";
    }
    cout<<endl;
    cout<<"Float Sorted ";
        for(int j=0;j<faryLength;j++){
        cout<<frary[j]<<" ";
    }
}