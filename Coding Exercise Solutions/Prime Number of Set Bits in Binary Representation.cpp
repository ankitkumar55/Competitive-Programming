class Solution {
public:
    int countPrimeSetBits(int left, int right) {

        int ans=0;

        for(int i=left; i<=right; i++){
          int tempcount=__builtin_popcount(i);

          if(tempcount==2 || tempcount==3  || tempcount==5 || tempcount==7 || tempcount==11 || tempcount==13 || tempcount==17 || tempcount==19 || tempcount==23 || tempcount==29){
            ans=ans+1;
          }
          
        }

        return ans;
        
    }
};
