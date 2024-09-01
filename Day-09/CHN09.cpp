#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string str;

    int N, A = 0, B = 0;

    cin >> str;

    N = str.length();

    for (int i = 0; i < N; i++)
    {
        if (str[i] == 'a')
        {
            A++;
        }
        else
        {
            B++;
        }
    }

    if (A == B)
    {
        cout << A << endl;
    }
    else if (A > B)
    {
        cout << B << endl;
    }
    else
    {
        cout << A << endl;
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
