class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int account_5 = 0;
        int account_10 = 0;
        int account_20 = 0;
        int n = bills.size();
        if(bills[0] > 5) return false;
        for(int i=0 ; i<n ; i++){
            if(bills[i]==5){
                account_5 += 5;
            }
            if(bills[i]==10){
                account_10 += 10;
                if(account_5 > 0){
                    account_5 -= 5;
                }
                else{
                    return false;
                }
            }
            if(bills[i]==20){
                account_20 += 20;
                if(account_10 > 0 && account_5 > 0){
                    account_10 -= 10;
                    account_5 -= 5;
                }
                else if(account_5 >= 15){
                    account_5 -= 15;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};