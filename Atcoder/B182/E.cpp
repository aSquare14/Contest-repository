#include <bits/stdc++.h>
#define ll long long
const unsigned int mod = 1000000007;
using namespace std;
void light(vector<vector<int>> &grid,int r,int c) {
    // left
    for(int i=c-1;i>=0;i--)
    {
        if(grid[r][i]==-1 || grid[r][i]==1) break;
        else if(grid[r][i]==0)
            grid[r][i] = 2;
    }
    // right    
    for(int i=c+1;i<grid[0].size();i++)
    {
        if(grid[r][i]==-1 || grid[r][i]==1) break;
        else if(grid[r][i]==0)
            grid[r][i] = 2;
    } 
    // bottom
    for(int i=r+1;i<grid.size();i++)
    {
        if(grid[i][c]==-1 || grid[i][c]==1) break;
        else if(grid[i][c]==0)
            grid[i][c] = 2;
    } 
    // up
    for(int i=r-1;i>=0;i--)
    {
        if(grid[i][c]==-1 || grid[i][c]==1) break;
        else if(grid[i][c]==0)
            grid[i][c] = 2;
    } 
        
}
int main() {
    int h,w; cin>>h>>w;
    int total_bulbs; cin>>total_bulbs;
    int total_blocks; cin>>total_blocks;
    vector<vector<int>> grid(h, vector<int> (w, 0));
    vector<vector<int>> visited(h, vector<int> (w, 0));
    while(total_bulbs--)
    {
        int x,y;
        cin>>x>>y;
        grid[x-1][y-1] = 1;
    }
    while(total_blocks--)
    {
        int x,y;
        cin>>x>>y;
        grid[x-1][y-1] = -1;
    }
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            if(grid[i][j]==1)
                light(grid,i,j);
    int count = 0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
           if(grid[i][j]==1 || grid[i][j]==2)
            count++;
        }
       
    }
     cout<<count<<endl;
}