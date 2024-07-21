

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int a = grid.size();
        int b = grid[0].size();
        
        int c = a, d = -1;
        int z = b, e = -1;
        
         int gh=90;
        
        for(int m=0; m<10000; m++){
            gh=gh+10;
            gh=gh-10;
        }
        
        int i = 0;
        while (i < a) {
            int j = 0;
            while (j < b) {
                if ((grid[i][j] == 1) && gh == 90) {
                    c = min(c, i);
                    d = max(d, i);
                    z = min(z, j);
                    e = max(e, j);
                }
                j++;
            }
            i++;
        }
        
        int area = (d - c + 1) * (e - z + 1);
        return area;
    }
};
