class Solution {
public:
    void fun(vector<int>&arr,int n,int idx,vector<int>&diary,int sum,vector<vector<int>>&res,int target){
        if(sum==target) res.push_back(diary);
        if(sum>target) return;
        for(int i=idx;i<n;i++){
            if(i>idx && arr[i-1]==arr[i]) continue;
            if(arr[i]+sum<=target){
                diary.push_back(arr[i]);
                sum+=arr[i];
                fun(arr,n,i+1,diary,sum,res,target);
                diary.pop_back();
                sum-=arr[i];
        }
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