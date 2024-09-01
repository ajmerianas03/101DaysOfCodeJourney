#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;

void solve() {
    int N;
    cin >> N;
    
    unordered_set<int> W = {6, 13, 20, 27, 7, 14, 21, 28};
    unordered_set<int> H = W;

    for (int i = 0; i < N; ++i) {
        int festival_day;
        cin >> festival_day;
        H.insert(festival_day);
    }
    
   
    cout << H.size() << endl;
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
