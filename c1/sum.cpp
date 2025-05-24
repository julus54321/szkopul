typedef long long ll;

#include <bits/stdc++.h> 
using namespace std;

int main(){

    ll x,y,s = 0;
    cin>>x>>y;

    for (ll i = x;i<=y;i++)
    {
        s += i;
    }

    cout<<s;

    return 0;
}