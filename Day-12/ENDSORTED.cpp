#include <bits/stdc++.h>
using namespace std;

void solve(){

    int N;

    cin >> N;

    int Pi , Pn;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        if (num==1)
        {
           Pi=i;
        }
        if (num==N)
        {
            Pn=i;

        }
        
    }

    int ab = Pi + (N-1)-Pn;

    if (Pi < Pn)
    {
        cout << ab << "\n";
    }else
    {
        cout << ab -1 << "\n";
    }
    
    
    
}

int main() {
	
	int t;

    cin >>t;
    while(t--){
        solve();
    }

}
