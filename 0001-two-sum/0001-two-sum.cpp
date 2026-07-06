class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size()-1;
        vector<int>ans;
        int start=0;
        int end=n;
        while(start<n){
            if(nums[start]+nums[end]==target){
                ans.push_back(start);
                ans.push_back(end);
            }
            end--;
            if(start == end){ 
                start += 1;
                end = n;
            }
        } 
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna