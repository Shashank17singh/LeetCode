class Solution {
public:
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(int i,int j,vector<vector<char>>&grid){
        int m=grid.size();
        int n=grid[0].size();
        grid[i][j]='0';
        for(int k=0;k<4;k++){
            int x=i+dir[k][0];
            int y=j+dir[k][1];
            if(x>=0 && x<m && y>=0 && y<n && grid[x][y]=='1') dfs(x,y,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    res++;
                    dfs(i,j,grid);
                }
            }
        }
        return res;
    }
};