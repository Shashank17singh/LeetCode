class Solution {
public:
    int hammingWeight(int n) {
        string ans;
        unsigned int a=n;
        while(a>0){
            ans=ans+to_string(a%2);
            a=a/2;
        }
        int cnt=0;
        for(int i=0;i<ans.size();i++) if(ans[i]=='1') cnt++;
        return cnt;
    }
};