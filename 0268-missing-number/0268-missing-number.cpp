class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int num;
        unordered_map<int,int>f(n);
        int i;
        for(i=0;i<=n;i++) f.insert({i,0});
        for(i=0;i<n;i++) f[nums[i]]=1;
        for(i=0;i<=n;i++){
            if(f[i]==0) return i;
        }
        return 0;
    }
};