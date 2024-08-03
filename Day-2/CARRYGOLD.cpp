#include <bits/stdc++.h>

using namespace std;

void solve(){
    int N,X,Y,M;

    cin >> N >> X >> Y;
    
    N=N+1;
    M=Y*N;

    if(M>=X){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

int main() {

    int t;

    cin >> t;

    while (t--) {
        solve();
    }

}