#include <bits/stdc++.h>
using namespace std;

void solve(){

    int count=0 , len;

    string T;

    cin >> T;

    len = T.length();

    for (int i = 0; i < len; i++)

    {
        if (T[i]=='4')
    {
         count++;
    }
    
       
    }
    cout << count << endl;
    





}

int main() {

    
	int t;
	
	std::cin >> t;
	
	while (t--)
    {
        solve();

    }
    

}
