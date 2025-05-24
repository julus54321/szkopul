#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,maxlicz = INT_MAX,c=0;
    cin>>x;
    vector<int> poziomwysuniecia(x);

    for (int i = 0; i<x;i++) {
        cin>>poziomwysuniecia[i];
    }

    reverse(poziomwysuniecia.begin(), poziomwysuniecia.end());

    for (int i = 0;i<x;i++)
    {
        if (poziomwysuniecia[i] >= maxlicz) {
            poziomwysuniecia[i] = maxlicz - 1;
            c++;
        }
        if (poziomwysuniecia[i] <= 0) {
            cout << -1 << "\n";
            return 0;
        }
        maxlicz = poziomwysuniecia[i];
    }

    cout<<c<<"\n";

    return 0;
}