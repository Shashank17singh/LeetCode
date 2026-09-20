class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int num=0;
        int i;
        for(i=0;i<=n;i++) num=num^i;
        for(i=0;i<n;i++) num=num^nums[i];
        return num;
    }
};