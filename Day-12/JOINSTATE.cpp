#include <bits/stdc++.h>
using namespace std;

void mState()
{
    int n, m , count=0 , currentSum=0;

    cin >> n >> m;

    vector<int> A(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        currentSum += A[i];

        if (currentSum >= m)
        {
            count++;
            currentSum=0;
        }
        
    }
    cout << count << endl;
    


    



}

int main() {
	
    int t;

    cin >> t;

    while (t--)
    {
        mState();
    }
    
	

}
