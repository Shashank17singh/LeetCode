class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==0) return;
        int i=0;
        int j=1;
        while(i<=j && j<n){
            if(nums[i]!=0) i++; 
            else if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
        return;
    }
};