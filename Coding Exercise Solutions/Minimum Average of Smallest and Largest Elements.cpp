class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<double> v;
        double avg=0;
        double n=nums.size()-1;
        
        for(int i=0; i<nums.size()/2; i++){
            
            avg=(nums[i]+nums[n-i])/2.0;
            
            v.push_back(avg);
            
        }
        
        sort(v.begin(), v.end());
        
        double temp=v[0];
        
        return temp;
        
        
    }
};
