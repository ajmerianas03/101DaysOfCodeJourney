#include <bits/stdc++.h>

using namespace std;



int main() {

    int t; cin >> t;
    while(t--){
        int c[2]; c[0] = c[1] = 0;
        for(int i = 0; i < 10; i++){
            int x; cin >> x;
            c[i & 1] += x;
        }
        int ans = 0;
        if(c[0] > c[1])ans = 1;
        else if(c[0] < c[1]) ans = 2;
        cout << ans << endl;
    }

}