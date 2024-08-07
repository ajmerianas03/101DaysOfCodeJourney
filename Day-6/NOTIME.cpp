#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int N , H , x ;

    cin >> N >> H >> x ;

    int T[N];

    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }

     bool canSolve = false;
    for (int i = 0; i < N; i++) {
        if (x + T[i] >= H) {
            canSolve = true;
            break;
        }
    }

    if (canSolve) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
    



}
