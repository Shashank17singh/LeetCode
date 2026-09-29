class Solution {
public:
    bool fun(int i,int j,int cnt,int n,int m,vector<vector<char>>& grid,vector<vector<vector<int>>>&dp){
        if(cnt<0) return false;
        if(i<0 || i>=n || j<0 || j>=m) return false;
        if(grid[i][j]=='(') cnt++;
        else cnt--;
        if(cnt<0) return false;
        if(i==n-1 && j==m-1) return cnt==0;
        if(dp[i][j][cnt]!=-1) return dp[i][j][cnt];
        return dp[i][j][cnt]=fun(i+1,j,cnt,n,m,grid,dp) || fun(i,j+1,cnt,n,m,grid,dp);
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
        int max_cnt=n+m;
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(max_cnt,-1)));
        return fun(0,0,cnt,n,m,grid,dp);
    }
};