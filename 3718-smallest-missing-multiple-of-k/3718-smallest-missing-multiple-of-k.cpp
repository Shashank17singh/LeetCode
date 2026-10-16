class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>f;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%k==0 && (f.empty()||f.back()!=nums[i])) f.push_back(nums[i]);
        }
        int num=k;
        if(f.size()==0) return k;
        for(int i=0;i<f.size();i++){
            if(num!=f[i]) num=min(num,f[i]);
            else num=k*(i+2);
        }        
        return num;
    }
};