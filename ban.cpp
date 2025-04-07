#include <bits/stdc++.h> 
using namespace std;

int main(){

    int a;
    cin >> a;

    vector<int> kpl(a + 1);
    vector<bool> co (a + 1, false);
    int ls = 0;

    for (int i = 1; i <= a; i++) {
        cin >> kpl[i];
    }

    for (int i = 1; i <= a; i++)
    {
        
        if (co[i] == false)
        {   
            int crg = i;
            while (!co[crg])
            {
                co[crg] = true;
                crg = kpl[crg]; 
            }
            ls++;
        }
    }
    cout<<ls<<endl;

    return 0;
}