#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed;
    cout << setprecision(2);

    int liczb;
    cin >> liczb;
    double licz,mn=DBL_MAX,ma=0;

    for (int i = 0; i<liczb;i++) {
        cin >> licz;
        mn = min(mn, licz);
        ma = max(ma, licz);
    }

    if ( floor(mn) == ceil(mn) ) {cout << mn;} else {cout << round(mn * 100.0) / 100.0;}
    cout << " ";
    if ( floor(ma) == ceil(ma) ) {cout << ma;} else {cout << round(ma * 100.0) / 100.0;}

    return 0;
}