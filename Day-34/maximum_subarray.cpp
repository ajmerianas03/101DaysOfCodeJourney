#include <iostream>
#include <vector>
#include <algorithm> 

//kadanes algorithm

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int N = nums.size();
        int best = nums[0];

        for(int a = 0; a < N; a++) {
            for(int b = a; b < N; b++) {
                int sum = 0;
                for(int k = a; k <= b; k++) {
                    sum += nums[k];
                }
                best = max(best, sum);
                if (sum < 0) {
                    sum = 0;
                }
            }
        }
        return best;
    }
};

int main() {
    Solution sol;
    
    
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    int result = sol.maxSubArray(nums);
    cout << "Maximum subarray sum is: " << result << endl;

    return 0;
}
