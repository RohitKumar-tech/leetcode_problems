class Solution {
public:
    int numSteps(string s) {
        int n = s.size();
        int carry = 0;
        int steps = 0;

        for (int i = n - 1; i > 0; --i) {
            int bit = (s[i] - '0') + carry;

            if (bit % 2 == 0) {
                steps += 1;
            } else {
                steps += 2;
                carry = 1;
            }
        }
        
        return steps + carry;
    }
};