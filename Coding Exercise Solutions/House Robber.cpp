
class Solution {
public:

    int solve(vector<int>& nums, int n, int i, vector<int>& dp){

        if(i>n){
            return 0;
        }

        if(dp[i]!= -1){
            return dp[i];
        }

            // int count1 = nums[i]+ solve(nums, n, i+2);
            // int count2 = solve(nums, n, i+1) ;

            dp[i]= max(nums[i]+ solve(nums, n, i+2, dp), solve(nums, n, i+1, dp));

            return dp[i];

    }


    int rob(vector<int>& nums) {

        int i=0;

        vector<int> ans(nums.size()+1, -1);

        return solve(nums, nums.size()-1, 0, ans);

    }
};
