class Solution {
public:
    unordered_map<int,int>dp;
    int climbStairs(int n) {
        if(n==0 or n==1) return 1;
        if(dp.find(n)!=dp.end()) return dp[n];
        int a1=climbStairs(n-1);
        int a2=climbStairs(n-2);
        int res=a1+a2;
        dp[n]=res;
        return res;
    }
};