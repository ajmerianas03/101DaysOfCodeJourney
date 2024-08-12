#include <bits/stdc++.h>
using namespace std;

void solve(){

     int N;
        cin >> N;
        
        vector<int> B(N);
        int ans = 0;

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
            ans += B[i];
        }


        if (ans % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }




}





int main() {
    
    int t;

    cin >>t;

    while (t--)
    {
        solve();
    }
    
        return 0;
}