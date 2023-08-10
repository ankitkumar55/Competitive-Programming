//https://leetcode.com/contest/weekly-contest-356/submissions/detail/1007393049/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        
        int count=0;
        
        for (int i=0; i<hours.size(); i++){
            if(hours[i]>=target){
                count =count+1;
                
            }
            
        }
        
        return count ;
        
    }
};
