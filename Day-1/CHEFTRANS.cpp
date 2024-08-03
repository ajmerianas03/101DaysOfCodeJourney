#include <bits/stdc++.h>

using namespace std;

void solve() {

    int X, Y, Z, sum;

    cin >> X >> Y >> Z;

    sum = X + Y;

    if (sum == Z) {
        std::cout << "EQUAL" << std::endl;
    } else if (sum > Z) {
        cout << "TRAIN" << endl;

    } else {
        cout << "PLANEBUS" << endl;
    }


}

int main() {

    int t;

    cin >> t;

    while (t--) {
        solve();
    }

}