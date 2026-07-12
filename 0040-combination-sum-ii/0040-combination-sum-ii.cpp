class Solution {
public:
    void fun(vector<int>&arr,int n,int idx,vector<int>&diary,int sum,vector<vector<int>>&res,int target){
        if(idx==n){
            if(sum==target) res.push_back(diary);
            return;
        }
        int nxt_idx=idx+1;
        while(nxt_idx<n && arr[nxt_idx]==arr[idx]) nxt_idx++;
        fun(arr,n,nxt_idx,diary,sum,res,target);
        if(arr[idx]+sum<=target){
            diary.push_back(arr[idx]);
            sum+=arr[idx];
            fun(arr,n,idx+1,diary,sum,res,target);
            diary.pop_back();
            sum-=arr[idx];
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        vector<int>diary;
        vector<vector<int>>res;
        fun(candidates,n,0,diary,0,res,target);
        sort(res.begin(),res.end());
        return res;
    }
};