#include <iostream>
using namespace std;



int countSaturdays(int N) {
   
    int fullWeeks = N / 7;
    
    int extraDays = N % 7;

 
    int saturdaysCount = fullWeeks;

    
    if (extraDays >= 6) {
        saturdaysCount += 1;
    }

    return saturdaysCount;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        cout << countSaturdays(N) << endl;
    }
    
    return 0;
}