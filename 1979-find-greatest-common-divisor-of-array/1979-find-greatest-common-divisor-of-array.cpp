class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int num=INT_MIN;
        for(int i=1;i<=mn;i++){
            if(mn%i==0 && mx%i==0) num=max(num,i);
        }
        return num;
    }
};