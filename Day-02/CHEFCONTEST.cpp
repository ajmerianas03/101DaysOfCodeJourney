#include <bits/stdc++.h>

using namespace std;

void solve() {
    int X, Y, P, Q, Chef, Chefina;

    cin >> X >> Y >> P >> Q;

    Chef = X + (P * 10);

    Chefina = Y + (Q * 10);

    if (Chef == Chefina) {
        std::cout << "Draw" << std::endl;
    } else if (Chef > Chefina) {
        cout << "Chefina" << endl;
    } else {
        cout << "Chef" << endl;
    }
}

int main() {

    int t;

    cin >> t;

    while (t--) {
        solve();
    }

}