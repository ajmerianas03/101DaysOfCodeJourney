#include <bits/stdc++.h>
using namespace std;

void solve(){

    int D , d , A , B , C ,ans ;

    cin >> D >> d >> A >> B >> C ;

    ans = D *d ;

    if (ans >= 42)
    {
        cout << C << endl;

    }else if (ans >= 21)

    {
        cout << B << endl;
    }else if (ans >= 10)
    {
        cout << A << endl;
    }else{
        cout << 0 << endl;
    }
    
    
    
    

}

int main() {
	
	int t;
	
	std::cin >> t;
	
	while (t--)
    {
        solve();
    }
    

}
