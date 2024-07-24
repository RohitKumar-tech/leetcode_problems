class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0;

        if (x<0 || (x != 0 && x%10 == 0)) {
            return false;
        }
        
        while (x > y) {
            y = y * 10 + x % 10;
            x = x/10;
        }

        return (x == y) || (x == y / 10);
    }
};