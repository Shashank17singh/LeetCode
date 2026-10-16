class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>seen(nums.begin(),nums.end());
        for(int i=1;;i++){
            if(seen.find(k*i)==seen.end()) return k*i;
        }
    }
};