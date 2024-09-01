#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int N;

    string D;

    cin >> N;

    cin >> D;

    bool flag =0;

    for (int i = 0; i <N; i++)
    {
        if(D[i]=='0'|| D[i]=='5'){

           flag = 1;

            break;
        }
    }

    if (flag==1)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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
