class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        
        int n=processorTime.size();
        
        int ans=0;
        
        sort(processorTime.begin(), processorTime.end());
        
        sort(tasks.begin(), tasks.end());
        
     
        
        for(int i=0; i<n; i++){
            
            int j=(n-i)*4;
            
            // int temp=max(processorTime[i]+)
            
            ans=max(processorTime[i]+tasks[j-1], ans );
            
                
        }
        
        return ans;
        
    }
};
