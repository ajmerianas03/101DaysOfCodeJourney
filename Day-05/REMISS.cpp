#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

void solve() {
    
    int A , B ;
    
    cin >> A >> B ;
    
    std::cout << max(A,B)<<" " << A+B << std::endl;

}

int main() {


    int t;

    cin >> t;

    while (t--) {
        solve();
    }

}