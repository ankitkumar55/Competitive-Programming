
// https://leetcode.com/submissions/detail/1004168216/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        
            long long start=1;
            long long end=n;
            long long k=n/2;
        
        if(n==1){
            return 1;
        }

            while (start!=end)
            {
                
                bool f=isBadVersion(k);
                
                if(f==false){
                    start=k+1;
                    k=(start+end)/2;
                }
                
                else if(f==true){
                    end=k;
                    k=(start+end)/2;
                }
            }
        
        
            return k;
        
       
    }
};
