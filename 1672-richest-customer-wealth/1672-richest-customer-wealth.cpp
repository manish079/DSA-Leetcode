class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int total_customer = accounts.size();
        int total_banks = accounts[0].size();
        
        int highest_money = 0;
        vector<int> v;
        
        for(int i=0; i<total_customer; i++){
            highest_money = 0;
            for(int j=0; j<total_banks; j++){
                highest_money = highest_money + accounts[i][j];
            }
            v.push_back(highest_money);
        }
        return *max_element(v.begin(),v.end());
    }
};