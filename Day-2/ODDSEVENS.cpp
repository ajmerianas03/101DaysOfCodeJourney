#include <bits/stdc++.h>
using namespace std;

void solve(){
    int A,B,ans;
    cin>>A>>B;
    
    ans =A+B;
    
    if(ans%2 !=0){
        std::cout << "Alice" << std::endl;
    }else{
        cout<<"Bob"<<endl;
    }
    
}

int main() {

	    int t;

    cin >> t;

    while (t--) {
        solve();
    }

}
