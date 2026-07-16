class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> mx=nums;
        for(int i=1;i<n;i++){
            mx[i]=max(mx[i],mx[i-1]);
        }
        vector<int>prefixGcd(n);
        for(int i=0;i<n;i++){
            prefixGcd[i]=gcd(nums[i],mx[i]);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int first=0;
        int last=prefixGcd.size()-1;
        long long sum=0;
        while(first<last){
            sum=sum+gcd(prefixGcd[first],prefixGcd[last]);
            first++;
            last--;
        }
        return sum;
    }
};