class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]<9) continue;
            else{
                while(nums[i]>0){
                    sum+=nums[i]%10;
                    nums[i]=nums[i]/10;
                }
                nums[i]=sum;
                sum=0;
            }
        }
        for(int i=0;i<n;i++) {
            if(nums[i]==i) return i;
        }
        return -1;
    }
};