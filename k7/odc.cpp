#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,mini=INT_MAX,maxi=0,temp,c=0,w=0;
    cin >> n;

    vector<int> liczby(n);

    for (int i = 0;i<n;i++) {
        cin >> temp;
        liczby[i] = temp;
        if (mini < temp) {
            c = 0;
        } else if (mini == temp) {
            c++;
        }
        mini = min(mini, temp);
    }

    if (c == 0) {c=1;}

    for (int i = 0;i<n;i++) {
        if ((liczby[i] != mini) && (w < c)) {
            maxi = max(maxi,liczby[i]);
        } else {
            w++;
        }
    }

    if (maxi > mini) {
        cout << maxi - mini;
    } else {
        cout << maxi;
    }
    

    return 0;
}