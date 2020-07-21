#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string seatDesignation(int k){
    for(int n=1;n<50;n++){
        if(n==12)return "1 WS";
        else if((6*n+1)>1 && k%(6*n+1)==0)return (to_string(k)+" WS");
        else if(k%(2+3*n)==0){return (to_string(k)+" MS");}
        else {return (to_string(k)+" AS");}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int size;
    cin >> size;
    int count = size;
    int i=0;
    string result[size];
    while (size-- > 0)
    {
        int n;
        cin >> n;
        int pos;
        if (n % 12 == 0)
        {
            pos = n - 11;
            result[i]=seatDesignation(pos);

        }
        else
        {
            int comp = n / 12;
            int diff = (comp + 1) * 12 - (n);
            if (diff > 6)
            {
                pos = (comp + 1) * 12 - (n - (comp * 12)) + 1;
                result[i]=seatDesignation(pos);
            }
            else
            {
                pos = (comp * 12) + ((comp + 1) * 12 - n) + 1;
                result[i]=seatDesignation(pos);
            }
        }
        i++;
    }

    for (int j = 0; j < count; j++)
    {
        cout<<result[j]<<endl;
    }
    
    return 0;
}