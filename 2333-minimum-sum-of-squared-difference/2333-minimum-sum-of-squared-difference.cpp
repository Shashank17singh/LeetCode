class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n=nums1.size();
        long long sum=0;
        vector<long long>f(100001,0);
        int max_num=0;
        long long k=(long long)k1+k2;
        for(int i=0;i<n;i++){
            int num=abs(nums1[i]-nums2[i]);
            f[num]++;
            max_num=max(max_num,num);
        }  
        for(int i=max_num;i>0 && k>0;i--){
            long long cnt=min(f[i],k);
            f[i]-=cnt;
            f[i-1]+=cnt;
            k-=cnt;
        }      
        for(long long i=1;i<=max_num;i++){
            sum+=f[i]*i*i;
        }
        return sum;
    }
};