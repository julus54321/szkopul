#include <bits/stdc++.h> 
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,h,c;
    cin >> a >> h;
    map<int , int> fmap;

    for (int x = 0; x < a;x++)
    {
        cin >> c;
        fmap[c]++;
    }

    int rh,mn,cn;
    
    for (const auto& [th, co] : fmap)
    {   
        rh = h;
        cn = co;
        for (auto it = fmap.rbegin(); it != fmap.rend(); ++it)
        {
            if (it->first <= th) break;
            int cl = min(it->second, rh);
            cn += cl;
            rh -= cl;
            if (rh == 0) break;
        }
        mn = max(mn, cn);
    }

    cout<< mn << endl;

    return 0;
}