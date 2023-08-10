// https://leetcode.com/submissions/detail/1011083088/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // 1st METHOD:

        // int n=prices.size();

        // int i=0, j=1;
        // int diff=0;

        // if(n==1){
        //     return 0;
        // }

        // if(n==2){
        //     if(prices[1]>prices[0]){
        //         return prices[1]-prices[0];
        //     }
        //     else{
        //         return 0;
        //     }

        // }

        // while(i<n && j<n){
        //     if(prices[j]>=prices[i]){
        //         diff=max(diff, prices[j]-prices[i]);
        //         j=j+1;
        //     }

        //     if(prices[j]<prices[i]){
        //         i=j;
        //         j=j+1;
        //     }
        // }

        // return diff;


        // 2ND METHOD:-


        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;

       
    }
};
