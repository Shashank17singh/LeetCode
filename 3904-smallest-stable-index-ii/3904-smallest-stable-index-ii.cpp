class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>f(n);
        f[n-1]=nums[n-1];
        for(int i=n-2;i>=0;--i) f[i]=min(nums[i],f[i+1]);
        int mx=nums[0];     
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            if(mx-f[i]<=k) return i;
        }
        return -1;
    }
};