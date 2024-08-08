#include <bits/stdc++.h>
using namespace std;


void solve(){
    
        int X, Y;
    cin >> X >> Y;

    
    int N = 10 * (Y - X);
    int H = 100 - Y;
     
    int h = (N + H - 1) / H; 
    
    cout << h << endl;
}

int main() {
	
	int t;
	
	std::cin >> t;
	while(t--){
	    
	    solve();
	}

}
