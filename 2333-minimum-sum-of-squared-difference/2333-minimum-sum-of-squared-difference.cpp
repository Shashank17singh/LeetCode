class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n=nums1.size();
        long long sum=0;
        vector<long long>f(100001,0);
        int max_gap=0;
        long long k=(long long)k1+k2;
        for(int i=0;i<n;i++){
            int gap=abs(nums1[i]-nums2[i]);
            f[gap]++;
            max_gap=max(max_gap,gap);
        }  
        for(int i=max_gap;i>0 && k>0;i--){
            long long diff_cnt=min(f[i],k);
            f[i]-=diff_cnt;
            f[i-1]+=diff_cnt;
            k-=diff_cnt;
        }      
        for(long long i=1;i<=max_gap;i++){
            sum+=f[i]*i*i;
        }
        return sum;
    }
};