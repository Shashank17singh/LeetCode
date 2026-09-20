class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt=0;
        int i=0,j=0;
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(j<m && i<n){
            if(s[j]>=g[i]){
                i++;
                j++;
                cnt++;
            }
            else if(s[j]<g[i]) j++;
        }
        return cnt;
    }
};