class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        int len = str.length();

        int f=0 , l=len-1;

        while(f<=l){
            if(str[f]!=str[l]){
                
                return false;
            }
            f++;
            l--;
        }
        return true;
    }
};