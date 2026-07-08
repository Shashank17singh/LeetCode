class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        ans.reserve(matrix.size()); // Optimization: Pre-allocate memory to avoid reallocations
        for(const auto &i:matrix) ans.push_back(accumulate(i.begin(),i.end(),0));
        return ans;
    }
};