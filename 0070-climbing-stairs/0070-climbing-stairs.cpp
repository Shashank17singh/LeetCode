class Solution {
public:
    
    int climbStairs(int n) {
        int a1=1;
        int a2=0;
        for(int i=0;i<n;i++){
            int temp=a1;
            a1=a1+a2;
            a2=temp;
        }
        return a1;
    }
};