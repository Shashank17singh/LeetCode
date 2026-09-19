class Solution {
public:
    int fun(vector<int>&a,int n,int i,int k,vector<vector<int>>&dp){
        if(i==n || k==0) return 0;
        if(dp[i][k]!=-1) return dp[i][k];
        if(k%2==0){
            int c1=fun(a,n,i+1,k-1,dp)-a[i];
            int c2=fun(a,n,i+1,k,dp);
            return dp[i][k]=max(c1,c2);
        }
        else{
            int c1=fun(a,n,i+1,k-1,dp)+a[i];
            int c2=fun(a,n,i+1,k,dp);
            return dp[i][k]=max(c1,c2);
        }
    }
    int maxProfit(vector<int>& prices) {
        int buy1 = -prices[0];
        int sell1 = 0;
        int buy2 = -prices[0];
        int sell2 = 0;

        for (int i = 1; i < prices.size(); i++) {
            int price = prices[i];
            buy1 = max(buy1, -price);
            sell1 = max(sell1, buy1 + price);
            buy2 = max(buy2, sell1 - price);
            sell2 = max(sell2, buy2 + price);
        }

        return sell2;
    }
};