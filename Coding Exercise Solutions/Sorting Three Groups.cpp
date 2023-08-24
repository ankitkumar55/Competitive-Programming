
// https://leetcode.com/submissions/detail/1027817667/

class Solution {
public:
    
    int solve(vector<int>& nums, int l,int r){
        int cnt=0;
        for(int i=0;i<=l;++i) cnt+=(nums[i]!=1);
        for(int i=l+1;i<=r;++i) cnt+=(nums[i]!=2);
        for(int i=r+1;i<nums.size();++i) cnt+=(nums[i]!=3);
        return cnt;
    }
    
    
     int minimumOperations(vector<int>& nums) {
        int n=nums.size(),res=1e9;
        for(int i=-1;i<n;++i){
            for(int j=i;j<n;++j){
                int val=solve(nums,i,j);
                res=min(res,val);
                // cout << i << " " << j <<" " << val << endl;
            }
        }
        return res;
    }
};
