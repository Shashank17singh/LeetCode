class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int i=0;
        int j=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2){
            swap(nums[i],nums[j]);
            j+=2;
        }
        return nums;
    }
};