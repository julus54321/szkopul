#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int wejsc;
    cin >> wejsc;

    int ilo = 0,c=1,x=0;

    for (int i = 0; i < wejsc - 1; i++) {
        cin >> x;
        if (x == c ) {
            c++;
        } else {ilo++;}
    }
    if (ilo == (wejsc - 1)) {
        cout << wejsc << '\n';
    } else {
        cout << ilo + 1<< '\n';
    }
    

    return 0;
}