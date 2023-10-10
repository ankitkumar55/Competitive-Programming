class Solution {
public:
    int differenceOfSums(int n, int m) {
        
        int temp1=0;
        int temp2=0;
        
        for(int i=1; i<=n; i++){
            
            if(i%m!=0){
                
                temp1=temp1+i;
                
            }
        }
        
         for(int i=1; i<=n; i++){
            
            if(i%m==0){
                
                temp2=temp2+i;
                
            }
        }
        
        int ans=temp1-temp2;
        
        return ans;
        
    }
};
