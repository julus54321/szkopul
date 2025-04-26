#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,x,mx=0,w=0;
    cin>>a;

    for (int i=0;i<a;i++)
    {
        for (int I=0;I<a;I++)
        {
            cin>>x;
            mx = max(mx,x);
        }
        w+=mx;
        mx=0;
    }

    cout<<w;

    return 0;
}