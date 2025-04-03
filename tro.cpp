#include <bits/stdc++.h> 
using namespace std;

int main(){

    int t,i,j,c;
    cin>>t;

    for (i = 0;i<t + 1;i++)
    {
        for(j = 0;j<i;j++)
        {   
            cout<<"T";
        }
        if (i!=0) {cout<<endl;}
    }

    for (i = t-1;i>=1;i--)
    {
        for(j = 0;j<i;j++)
        {   
            cout<<"T";
        }
        cout<<endl;
    }

    return 0;
}