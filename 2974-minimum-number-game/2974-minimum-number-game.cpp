class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        vector<int>tmp;
        int alice=0;
        int bob=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(!pq.empty()){
            alice=pq.top();
            pq.pop();
            bob=pq.top();
            pq.pop();
            tmp.push_back(bob);
            tmp.push_back(alice);
        }
        return tmp;
    }
};