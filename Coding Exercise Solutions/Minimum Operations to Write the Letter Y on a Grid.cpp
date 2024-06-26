class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
//         lets count values freq  lying on Y 
        int arr[3];
        int n=grid.size();
        int freq[3];
        vector<vector<int>>vis(n,vector<int>(n,0));
//         diagonal starting at the top-left cell
        int mid=n/2;
        for(int i=0;i<=mid;i++){
            if(grid[i][i]==0)arr[0]++;
            else if(grid[i][i]==1)arr[1]++;
            else arr[2]++;
            vis[i][i] ++;
        }
//         diagonal starting at the top-right cell
        int j=mid+1;
        for(int i=mid-1;i>=0 && j<n;i--){
             if(grid[i][j]==0)arr[0]++;
            else if(grid[i][j]==1)arr[1]++;
            else arr[2]++;
            vis[i][j]++;
            j++;
        }
//          vertical line starting at the center cell
        for(int i=mid+1;i<n;i++){
            if(grid[i][mid]==0)arr[0]++;
            else if(grid[i][mid]==1)arr[1]++;
            else arr[2]++;
            vis[i][mid]++;
        }
//         count freq of values at remaining cells
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]>0)continue;
                freq[grid[i][j]]++;
            }
        }
//         now compute the minm cost out of all cases
        int ans=INT_MAX;
        for(int c=0;c<=2;c++){
            int costY=arr[0]+arr[1]+arr[2]-arr[c];
            int costX=INT_MAX;
            for(int j=0;j<=2;j++){
                if(j==c)continue;
                int temp=freq[0]+freq[1]+freq[2]-freq[j];
                costX=min(costX,temp);
            }
            ans=min(ans,costY+costX);
        }
        return ans;
        
        
    }
};
