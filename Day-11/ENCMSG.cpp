#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    cin.ignore(); 
    
    string S;
    getline(cin, S);
    
    
    for (int i = 0; i < N - 1; i += 2) {
        swap(S[i], S[i + 1]);
    }
    
    
    for (char &ch : S) {
        ch = 'a' + ('z' - ch); 
    }
    
    
    cout << S << endl;
}

int main() {
    ios::sync_with_stdio(false); // this is for Improve the Performance of input and outpu
    cin.tie(nullptr); // it's used to Optimize the Performance of input and output 
    
    int T;
    cin >> T;
    cin.ignore(); 
    
    while (T--) {
        solve();
    }
    
    return 0;
}
