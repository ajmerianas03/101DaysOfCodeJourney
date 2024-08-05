#include <bits/stdc++.h>

using namespace std;

void solve() {

    int X, Y, temp, ans;
    cin >> X >> Y;


    if (X == 0 && Y == 0) {

        cout << 0 << endl;

    } else if (X == Y) {
        std::cout << (X + Y) - 1 << std::endl;
    } else {
        temp = X - Y;
        ans = (Y + Y) + temp;
        cout << ans <<endl;
    }

}

int main() {

    int t;

    cin >> t;

    while (t--) {
        solve();
    }

}