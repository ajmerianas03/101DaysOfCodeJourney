#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a % 3 == 0 || b % 3 == 0)
        cout << 0 << '\n';
    else if (a % 3 == b % 3)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';
    return;
}

int main() {
	
    
    int t;

    cin >> t;

    while (t--)
    {
        solve();
    }
    

}
