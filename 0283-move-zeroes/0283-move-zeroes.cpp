class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            bool flag = true;
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] == 0) {
                    swap(arr[j + 1], arr[j]);
                    flag = false;
                }
            }
            if (flag == true)
                break;
        }
    }
};