#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N , K, A ;

    string ans;


    cin >> N >> K;
    
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        if (K==0){
            ans += '0';

        }else if (K  < A)
        {
            ans +='0';
        }else
        {
            K=K-A;
            ans+='1';
        }

        
        
    }
    cout << ans << endl;
    

}

int main() {
	
	int t;

    cin >> t;

    while (t--)
    {
        solve();
    }
    


}
