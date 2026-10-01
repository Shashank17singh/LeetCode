class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=0; 
        int cnt=0;
        for (int i=0;i<nums.size();i++){
            if(cnt==0) num=nums[i];
            if(nums[i]==num) cnt+=1;
            else cnt-=1;   
        }
        return num;
    }
};