class Solution {
public:
    bool fun(vector<int>&nums,int sum){
        int n=nums.size();
        int i,j;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        for(j=0;j<=sum;j++) dp[n][j]=0;
        dp[n][0]=1;
        for(i=n-1;i>=0;i--){
            for(j=0;j<=sum;j++){
                if(nums[i]>j) dp[i][j]=dp[i+1][j];
                else dp[i][j]=dp[i+1][j-nums[i]] || dp[i+1][j];
            }
        }
        return dp[0][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++) sum=sum+nums[i];
        if(sum%2==1) return false;
        else return fun(nums,sum/2);
    }
};