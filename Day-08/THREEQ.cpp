#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int A=0,B=0;

    int count =3;
    
    for (int  i = 0; i < count; i++)
    {
        int temp;
        cin >> temp;
        A +=temp;
    }

        for (int  i = 0; i < count; i++)
    {
        int temp;
        cin >> temp;
        B +=temp;
    }

    if (A==B)
    {
        cout << "Pass"<<endl;

    }else
    {
         cout << "Fail"<<endl;
    }
    
    
    
    
}

int main() {
	
	int t;
	
	std::cin >> t;
	
	while(t--){
	    solve();
	}

}
