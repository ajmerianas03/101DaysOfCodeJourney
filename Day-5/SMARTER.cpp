#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void solve(){
    
    float L , V1 , V2  , ans;
    
    cin >> L >> V1 >> V2 ;
    
    double T , H ;

    T = ceil(L / V1);

    H = ceil(L / V2);



    if(T==H){
        cout << -1 << endl ;

    }else{
        ans = (T - H )- 1 ;

        cout << ans << endl ;
    }
    
    
    
}


int main() {

	int t;
	
	cin >> t;
	
	while(t--){
	    solve();
	}

}
