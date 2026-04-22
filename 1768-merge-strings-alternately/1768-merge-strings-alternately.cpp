class Solution {
public:
    string mergeAlternately(string a, string b) {
        string res;
        int n = max(a.size(), b.size());

        for(int i = 0; i < n; i++) {
            if(i < a.size()) res += a[i];
            if(i < b.size()) res += b[i];
        }

        return res;
    }
};