#include <iostream>

int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    int sigma[] = {a,b,c};

    int s = sigma[0];

    for (int i = 1; i < 3; ++i) {
        if (sigma[i] < s) {
            s = sigma[i];
        }
    }


    return 0;
}