#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int iloscprzyciskow,iloscakcji;
    cin >> iloscprzyciskow >> iloscakcji;

    vector<int> wartosci(iloscprzyciskow, 0);

    int akcja,magicznaliczba = 0,maxwart = 0;
    
    for (int i = 0; i<iloscakcji;i++) {
        cin >> akcja;
        if (akcja == (iloscprzyciskow + 1)) {
            magicznaliczba = maxwart;
        } else {
            if (wartosci[akcja - 1] < magicznaliczba)
                wartosci[akcja - 1] = magicznaliczba;
            wartosci[akcja - 1]++;
            maxwart = max(maxwart, wartosci[akcja - 1]);
        }
    }

    for (int i = 0; i<iloscprzyciskow;i++) {
        if (wartosci[i] < magicznaliczba)
            wartosci[i] = magicznaliczba;
        cout<<wartosci[i]<<" ";
    }

    return 0;
}