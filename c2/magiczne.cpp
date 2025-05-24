#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y,z;
    int a,b,c;

    cin >> x >> y >> z >> a >> b >> c;

    if (a + b + c > x + y + z) {
        cout << "Nie";
        return 0;
    }

    if (x >= a) {x -= a; a = 0;}
    if (y >= b) {y -= b; b = 0;}
    if (z >= c) {z -= c; c = 0;}

    if (a == 0 && b > 0) {
        y += x/2;
        x = 0;
        if (y >= b) {y -= b; b = 0;} else if (z <= c) {cout << "Nie"; return 0;}
    }

    if (a + b + c > x + y + z) {
        cout << "Nie";
        return 0;
    }

    if (a == 0 && b == 0) {
        if (((x/2) + (y/2) + z) < c) {cout << "Nie"; return 0;} else {cout << "Tak"; return 0;}
    }

    if (c == 0 && z > 0 && x < a) {
        if ((a - x) <= (z/2)) {z -= ((a - x)*2); x = 0; a = 0;} 
    }

    if (y + z/2 >= b) {cout << "Tak";return 0;} else {cout << "Nie"; return 0;}

    cout << x << " " << y << " " << z << "\n" << a << " " << b << " " << c; 

    return 0;
}