typedef long long ll;

#include <bits/stdc++.h> 
using namespace std;

int main(){

    ll pol,lbulw;
    cin>>pol;

    vector<ll> vec(pol);

    for (ll x = 0; x < pol;x++)
    {
        cin >> vec[x];
    }

    cin>>lbulw;

    sort(vec.rbegin(), vec.rend());

    ll y = 0;

    for (ll i = 0;i < pol && lbulw > 0;i++)
    {   
        ll bdz = min(vec[i] , lbulw);
            
        y += bdz * bdz;
        lbulw -= bdz;
        
    }

    cout << y <<endl;
    
    return 0;
}