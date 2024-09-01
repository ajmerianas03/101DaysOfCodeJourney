#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int A , B , C ;
    
    cin >> A >> B >> C ;
    
    if(A == 1 && B == 1 && C == 1 || A == 0 && B == 0 && C == 0 ){
        cout << 0 << endl ;
    }else{
        cout << 1 << endl ;
    }
    
}



int main() {
   
    int t;

    cin >> t;

    while (t--) {
        solve();
    }



}