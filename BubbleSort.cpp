#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int* bubbleSort(int ary[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ary[i]>ary[j]){
                int temp=ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
            }
        }
    }
    return ary;
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    int ary[n];
    for(int i=0;i<n;i++){
        cin>>ary[i];
    }
    cout<<endl;
    int* reuslt = bubbleSort(ary,n);
    for(int i=0;i<n;i++){
        cout<<ary[i];
    }
    return 0;

}