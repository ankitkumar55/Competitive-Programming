// https://leetcode.com/submissions/detail/1002654107/


class Solution {
public:
    int countPrimes(int n) {
        
        
        // 1st METHOD :
        
        
//         unordered_map<long int,bool> m;
        
//         long long count=1;
        
//         if(n==0 || n==1 || n==2){
//             return 0;
//         }
        
//         if(n==3){
//             return 1;
//         }
        
//         for(int i=3; i<n; i=i+2){
            
//             if(m[i]==false){
                    
//                 count=count+1;
                
                
//                 for(int j=1; j<(n/i)+1; j=(j+2)){
                    
//                     long long h=i*j;
                    
//                     m[h]=true;
                    
                    
//                 }
                    
                    
//              }
            
            
//         }
        
//         return count;
        
        
        //2nd METHOD :
        
        int total=0;
       vector<bool> v(n+1,true);
        // prime[0]=prime[1]=false;
        for(int i=2;i<n;i++)
        {
           if(v[i])
           {
               total++;
              for(int j=2*i;j<n;j=j+i)
              {
                  v[j]=0;
              } 
           }  
        }
        return total;
     
    }
};
