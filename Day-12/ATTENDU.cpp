#include <bits/stdc++.h>
using namespace std;

void ATTENDU() {
    int N;
    cin >> N;
    
    string B;
    cin >> B;

    int days_present = 0;
    for (int i = 0; i < N; i++) {
        if (B[i] == '1') {
            days_present++;
        }
    }
    
    int total_days = 120;
    int required_attendance = 90;
    int remaining_days = total_days - N;
    int max_possible_attendance = days_present + remaining_days;

    if (max_possible_attendance >= required_attendance) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ATTENDU();
    }
    
    return 0;
}
