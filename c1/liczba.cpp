#include <bits/stdc++.h> 
using namespace std;

int main(){

    int a,b;
    int x = 0;
    cin>>x;

    for (int i = 1; i < x; i++)
    {
        if (x%i != 0){a = i; break;}
    }
    for (int i = x-1; i < x; i--)
    {
        if (x%i != 0){b = i; break;}
    }

    cout<<a<<" "<<b<<endl;
    return 0;
}