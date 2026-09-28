class Solution {
public:
    int maxDepth(string s) {
        int res=-1;
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            if(s[i]==')') cnt--;
            res=max(cnt,res);
        }
        return res;
    }
};