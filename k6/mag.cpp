#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y,z;
    int a,b,c;

    cin >> x >> y >> z >> a >> b >> c;

    int nadmiar_1 = max(a - x, 0);
    int nadmiar_2 = max(b - y, 0);
    int nadmiar_3 = max(c - z, 0);

    int niedomiar_1 = max(x - a, 0);
    int niedomiar_2 = max(y - b, 0);
    int niedomiar_3 = max(z - c, 0);
    
    int kule_do_zmiany = (nadmiar_1 / 2) + (nadmiar_2 / 2) + (nadmiar_3 / 2);
    int kule_potrzebne = niedomiar_1 + niedomiar_2 + niedomiar_3;

    if (kule_do_zmiany >= kule_potrzebne) {
        cout << "Nie";
    } else {
        cout << "Tak";
    }

    return 0;
}