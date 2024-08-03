#include <bits/stdc++.h>

using namespace std;

void solve() {

    int x1, x2, y1, y2;
    float y, z;

    cin >> x1 >> x2 >> y1 >> y2;

    y = static_cast<float>(y1) / x1;
    z = static_cast<float>(y2) / x2;

    if (y == z) {
        std::cout << 0 << std::endl;
    } else if (y < z) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }

}

int main() {

    int t;

    cin >> t;

    while (t--) {
        solve();
    }

}