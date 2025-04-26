#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int liczn = a * d - b * c;
    int mian = b * d;
    int dziel = gcd(abs(liczn), mian);

    liczn /= dziel;
    mian /= dziel;

    if (abs(liczn) >= mian)
    {
        int lc = liczn/mian;
        int n = abs(liczn%mian);
        if (n==0)
        {
            cout<<lc<<"\n";
        }else
        {
            cout<<lc<<" "<<n<<"/"<<mian<<"\n";
        }
    }else
    {
        cout<<liczn<<"/"<<mian;
    }
    
    return 0;
}