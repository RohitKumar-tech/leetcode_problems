class Solution {
public:
    void reverseString(vector<char>& s){
        int n = s.size();
        char temp;
        int t = n;
        for(int i=0 ; i<n/2 ; i++) {
            temp = s[t-1];
            s[t-1] = s[i];
            s[i] = temp;
            t--;
        }
    }
};