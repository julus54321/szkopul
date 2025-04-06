typedef long long ll;

#include <bits/stdc++.h> 
using namespace std;

int main(){

    ll a,b,x,y,c=0;

    cin>>a>>b>>x>>y;

    for (ll w=0;w<a;w++)
    {
        ll wy = w*y;

        ll h = wy/x;
        if (h < b && h < w) c++;
    }
    
    cout<<c<<endl;

    return 0;
}