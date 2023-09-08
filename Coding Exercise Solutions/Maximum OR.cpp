class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        int n = nums.size(); 
        vector<int> pre(n, 0), post(n, 0); 
        
        for(int i=1; i<n; i++) pre[i] = (pre[i-1] | nums[i-1]); 
        for(int i = n-2; i>=0; i--) post[i] = (post[i+1] | nums[i+1]); 
        
        long long res = 0; 
        
        for(int i=0; i<n; i++){
            long long num = nums[i]; 
            num *= pow(2, k); 
            res = max(res, pre[i]|num|post[i]);
        }
        return res;
    }
};
