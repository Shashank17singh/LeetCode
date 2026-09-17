class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        int prev_prev=1;
        int prev=2;
        int ans;
        for(int i=2;i<n;i++){
            ans=prev_prev+prev;
            prev_prev=prev;
            prev=ans;
        } 
        return ans;
    }
};