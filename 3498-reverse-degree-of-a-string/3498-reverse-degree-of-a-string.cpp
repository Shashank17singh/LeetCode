class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            int ascii=static_cast<int>(c);
            ans+=(122-c+1)*(i+1);
        }
        return ans; 
    }
};