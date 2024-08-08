#include <bits/stdc++.h>

#include <cmath>


using namespace std;



void solve(){

    int N , X , K , girls ,rem_Girls , rem_Boys;

    cin >> N >> X >> K ;

    girls = N - X;

    rem_Boys =  X % K;

    rem_Girls = girls % K;

    if(rem_Boys==rem_Girls){
        cout << 0 << endl ;
    }else{

        cout << std::abs(rem_Boys-rem_Girls)<< endl;
    }




}


int main() {
	
	
	int t;
	
	std::cin >> t;
	
	while(t--){
	    
	    solve();
	}

}
