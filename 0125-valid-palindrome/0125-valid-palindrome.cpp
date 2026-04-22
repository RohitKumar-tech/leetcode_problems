class Solution {
public:
    bool isPalindrome(string s) {
        string r = "";
        string p = "";

        for(char ch : s){
            if(isalnum(ch)){
                r += tolower(ch);
            }
        }

        int size = r.size();
        int temp = size - 1;

        for(int i = 0; i < size; i++){
            p += r[temp];
            temp--;
        }

        return p == r;
    }
};