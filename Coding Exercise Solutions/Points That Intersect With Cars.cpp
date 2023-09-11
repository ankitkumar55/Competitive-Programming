

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<bool>ump(101);
        int ans = 0;
        for(const auto&it : nums){
            for(int i=it[0]; i<=it[1]; ++i){
                ans+=!ump[i];
                ump[i] = 1;
            }
        }
        return ans;
    }
};
