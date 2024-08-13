#include <bits/stdc++.h>
using namespace std;

void ATTENDU(){

    int N,count=0;

    cin >> N;

    string B;
    cin >> B;



    for (int i = 0; i < N; i++)
    {
        if (B[i]=='0')
        {
            count++;
        }
        if (count==30)
        {
            break;
        }
        
        
    }
    
    if (count==30)
    {
        cout << "No"<<'\n';
    }else
    {
        cout << "Yes" << '\n';
    }
    
    
}

int main() {
	int t;

    cin >> t;

    while (t--)
    {
        ATTENDU();
    }
    

}
