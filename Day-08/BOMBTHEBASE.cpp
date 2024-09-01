#include <bits/stdc++.h>
using namespace std;


void solve(){

    int N , X , count=0;

    cin >> N >> X ;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;

        if (temp < X)
        {
            count=i+1;
        }
        
    }

    cout << count << endl;
    
    


}

int main() {
	
	int t;

    cin >> t;

    while (t--)
    {
        solve();
    }
    

}
