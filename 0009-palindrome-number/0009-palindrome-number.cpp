class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int rnum = 0;
        while(x > rnum) {
            rnum = rnum * 10 + x % 10;
            x /= 10;
        }
        
        return x == rnum || x == rnum/10;
    }
};