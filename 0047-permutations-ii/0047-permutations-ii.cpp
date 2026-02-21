class Solution {
private:
    void recurPermute(vector<int> &ds , vector<int> &nums , vector<vector<int>> &ans , int freq[]){
        if(ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }

        for(int i=0 ; i<nums.size() ; i++){
            if (i > 0 && nums[i] == nums[i - 1] && freq[i - 1] == 0)
                continue;
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                recurPermute(ds,nums,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0 ; i<nums.size() ; i++) freq[i]=0;
        recurPermute(ds , nums , ans , freq);
        return ans;
    }
};