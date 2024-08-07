#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int max_sum = 0;
    for (int i = 0; i < N; ++i)
    {
        int current_sum = A[i] + A[(i + 1) % N];
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << endl;
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