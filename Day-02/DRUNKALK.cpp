#include <bits/stdc++.h>

using namespace std;

void solve() {
    int K, odd, even, ans;

    cin>> K;
    
    even = K / 2;
    odd = K - even;

    ans = (odd * 3) - even;

    std::cout << ans << std::endl;
}

int main() {

    int t;

    cin >> t;

    while (t--) {
        solve();
    }
}