#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, A, B, ans;

    cin >> N >> A >> B;

    ans = 2 * (180 + N);

    cout << ans - (A + B) << endl;
}

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        solve();
    }
}
