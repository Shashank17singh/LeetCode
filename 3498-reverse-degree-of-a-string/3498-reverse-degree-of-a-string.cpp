class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int n=26-(s[i]-'a');
            ans+=n*(i+1);
        }
        return ans; 
    }
};