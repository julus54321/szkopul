#include <bits/stdc++.h> 
using namespace std;

int main(){

    int x,s;
    int t = 0;
    cin>>s;
    vector<int> vec;

    for (int i = 0;i<s;i++)
    {
        cin >> x;
        t += x;
        if (x == 0) {cout<<t/gcd(t,s)<<"/"<<s/gcd(t,s); break;}
    }

    return 0;
}