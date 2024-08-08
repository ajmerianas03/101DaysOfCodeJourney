#include <iostream> // Include only necessary header

using namespace std;

void solve() {
    int L, R, M;
    cin >> L >> R >> M;

    int LM = (M + L - 1) / L;
    int RM = M / R;

    
    cout << LM + RM << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
