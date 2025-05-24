typedef long long ll;

#include <bits/stdc++.h> 
using namespace std;

int main(){

    ll a,b,x,y,c=0;

    cin>>a>>b>>x>>y;

    ll g = gcd(x, y);
    x /= g;
    y /= g;
    

    ll mk=min(a / x, b / y);

    cout<<mk<<endl;

    return 0;
}