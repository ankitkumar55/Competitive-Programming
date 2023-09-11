

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        if(sx==fx && sy==fy && t==1){
            return false;
            
        }
        
        long long p=abs(sx-fx);
        long long q=abs(sy-fy);
        
        long long ans=max(p,q);
        
        if(ans<=t){
            
            return true;
            
        }
        
        else{
            return false;
        }
        
    }
};
