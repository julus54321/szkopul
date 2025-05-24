#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,xx,y,yy,z,zz;
    int a,c=0,cc=0,count=0;
    cin>>a;

    for (int I=0;I<a;I++)
    {
        cin>>x>>y>>z;
        c = x * 3600 + y * 60 + z;
        cin>>xx>>yy>>zz;
        cc = xx * 3600 + yy * 60 + zz;
        count += cc - c;
    }

    int h = count / 3600;
    int m = (count % 3600) / 60;
    int s = count % 60;

    cout<<h<<":"<<(m<10?"0":"")<<m<<":"<<(s<10?"0":"")<<s<<"\n";

    return 0;
}