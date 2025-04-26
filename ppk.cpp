#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,x,y,s=0;
    cin>>a;

    while (cin>>x>>y) 
    {
        s=max(s,x+y);
    }

    cout<<s;

    return 0;
}