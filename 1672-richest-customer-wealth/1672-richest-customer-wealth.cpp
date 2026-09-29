class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int max_num=0;
        for(int i=0;i<accounts.size();i++){
            sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            max_num=max(sum,max_num);
        }
        return max_num;
    }
};