#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,sr;
    cin >> a >> b >> c;

    int min = std::min(a, std::min(b, c));
    int max = std::max(a, std::max(b, c));

    sr = (min + max) / 2; 

    if (sr < 0) {
        cout << std::max(abs(min),max);
    } else {
        cout << (max - sr);
    }

    return 0;
}