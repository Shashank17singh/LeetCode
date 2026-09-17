class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2 || n==3) return n;
        int prev_prev=2;
        int prev=3;
        int ans;
        for(int i=4;i<=n;i++){
            ans=prev_prev+prev;
            prev_prev=prev;
            prev=ans;
        } 
        return ans;
    }
};