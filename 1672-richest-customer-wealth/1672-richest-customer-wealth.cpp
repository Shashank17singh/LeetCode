class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        vector<int>sum(n,0);
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[0].size();j++){
                sum[i]+=accounts[i][j];
            }
        }
        return *max_element(sum.begin(),sum.end());
    }
};