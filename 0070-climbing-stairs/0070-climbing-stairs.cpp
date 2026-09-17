class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return n;
        int prev_prev=0;
        int prev=1;
        int ans;
        for(int i=1;i<=n;i++){
            ans=prev_prev+prev;
            prev_prev=prev;
            prev=ans;
        } 
        return ans;
    }
};