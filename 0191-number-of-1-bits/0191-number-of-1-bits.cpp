class Solution {
public:
    int hammingWeight(int n) {
        string ans;
        while(n>0){
            ans=ans+to_string(n%2);
            n=n/2;
        }
        int cnt=0;
        for(int i=0;i<ans.size();i++) {
            if(ans[i]=='1') cnt++;
        }
        return cnt;
    }
};