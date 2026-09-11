class Solution {
public:
    bool valid(int i,int j,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m) return false;
        return true;
    }
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int x[4]={-1,1,0,0};
        int y[4]={0,0,-1,1};
       priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
       vector<vector<int>>res(n,vector<int>(m,1e8));
       pq.push({grid[0][0],{0,0}});
       res[0][0]=grid[0][0];
       while(!pq.empty()){
        pair<int,pair<int,int>>p=pq.top();
        pq.pop();
        int level=p.first;
        int row=p.second.first;
        int col=p.second.second;
        if(level>res[row][col]) continue;
        for(int k=0;k<4;k++){
            int r=row+x[k];
            int c=col+y[k];
            if(!valid(r,c,n,m)) continue;
            int newlevel=max(level,grid[r][c]);
            if(newlevel<res[r][c]){
                res[r][c]=newlevel;
                pq.push({newlevel,{r,c}});
            }
        }
       }
       return res[n-1][m-1];
    }
};