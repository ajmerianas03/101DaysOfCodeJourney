#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N; 
    
    string str;
    cin >> str; 
    
    int zero = 0, one = 0;

    for (int i = 0; i < N; i++) {
        if (str[i] == '1') {
            one++;
        } else {
            zero++;
        }
    }

    if (one == 0) {
        
        cout << 0 << endl;
    } else if (zero == 0) {
        
        cout << 1 << endl;
    } else if (one > zero) {
        
        cout << zero+1 << endl;
    } else {
        
        cout <<  one  << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
