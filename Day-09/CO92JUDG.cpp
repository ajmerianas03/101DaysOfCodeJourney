#include <bits/stdc++.h>
using namespace std;

void solve(){

    int N;

    cin >> N;

    int A , B ;

    int maxA = 0 , maxB=0;

    int sumA=0 ,sumB=0;

    for (int i = 0; i < N; i++)
    {
        cin >>  A;

        if (maxA< A)
        {
            maxA = A ;

        }
        sumA +=A;
    }

    for (int i = 0; i < N; i++)
    {
        cin >>  B;

        if (maxB< B)
        {
            maxB = B ;

        }
        sumB +=B;
    }

    int FA=sumA - maxA , FB=sumB - maxB; 

    //FA Final A
         if (FA < FB)
          {
            cout << "Alice" << endl;
        } 
        else if (FA > FB) 
        {
            cout << "Bob" << endl;
        } else {
            cout << "Draw" << endl;
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
