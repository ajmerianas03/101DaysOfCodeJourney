#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int N, A, sum = 0, num;

    cin >> N;

    //  vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> num;

        sum += num;
    }

    if (sum & 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
