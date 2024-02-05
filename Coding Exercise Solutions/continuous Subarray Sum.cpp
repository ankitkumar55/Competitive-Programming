class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mpp;
        mpp[0]=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            int rem=sum%k;
            if(mpp.find(rem)==mpp.end()){
                mpp[rem]=i+1;
            }
            else if(mpp[rem]<i){
                return true;
            }
        }
        return false;
    }
};
