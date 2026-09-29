class Solution {
public:
    bool dp[105][105][205]={false};
    bool hasValidPath(vector<vector<char>>& grid) {
        memset(dp,0,sizeof(dp));
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]==')') return false;
        else dp[0][0][1]=true;
        int max_cnt=n+m;
        int prev_cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for (int cnt=0;cnt<max_cnt;cnt++){
                    if(i==0 && j==0) continue;
                    if(grid[i][j]=='(') prev_cnt=cnt-1;
                    else prev_cnt=cnt+1;
                    if(prev_cnt>=0 && prev_cnt<=max_cnt){
                        bool from_top = false;
                        bool from_left = false;
                        if(i>0) from_top=dp[i-1][j][prev_cnt];
                        if(j>0) from_left = dp[i][j-1][prev_cnt];
                        if(from_top==true || from_left==true) dp[i][j][cnt] = true;
                    }
                }
            }
        }
        return dp[n-1][m-1][0];
    }
};