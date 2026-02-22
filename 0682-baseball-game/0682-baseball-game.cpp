class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> ans;

        for(int i=0 ; i<n ; i++){
            int m = ans.size();

            if(operations[i] == "+"){
                int last = ans[m-1];
                int secondlast = ans[m-2];

                ans.push_back(last + secondlast);
            }
            else if(operations[i] == "D"){
                int last = ans[m-1];

                ans.push_back(2*last);
            }
            else if(operations[i] == "C"){
                ans.pop_back();
            }
            else{
                ans.push_back(stoi(operations[i]));
            }
        }

        int total = 0;

        for(int i=0 ; i<ans.size() ; i++){
            total += ans[i];
        }

        return total;
    }
};