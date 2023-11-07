

// class Solution {
// public:

//     int solve(vector<int>& coins, int amount, int i, vector<int>& dp){

//         if(amount==0){
//             return 0;
//         }

//         if(i>=coins.size() || amount < 0){
//             return 1e5;
//         }

//         if(dp[i]!= 1e5){

//             return dp[i];

//         }

//         // int count1 = 1 +  solve(coins, amount-coins[i], i);
//         // int count2 = solve(coins, amount, i+1);

//         return dp[i]=min( 1 +  solve(coins, amount-coins[i], i, dp), solve(coins, amount, i+1, dp) );

//     }

//     int coinChange(vector<int>& coins, int amount) {

//         int n=coins.size();

//         vector<int> dp(n+2, 1e5);

//         int ans= solve(coins, amount, 0, dp);
        
//          if(ans==1e5){
//              return -1;
//          }

//          return ans;
//     }
// };



class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //Edge case
        if(amount<1){
            return 0;
        } 

        vector<int> minCoinsDP(amount+1,INT_MAX);
        minCoinsDP[0]=0;

        for(int i=1;i<=amount;i++){
            for(int coin: coins){
                if(coin<=i && minCoinsDP[i-coin]!=INT_MAX){
                    minCoinsDP[i]=min(minCoinsDP[i], 1+minCoinsDP[i-coin]);
                }
            }
        }

        if(minCoinsDP[amount]==INT_MAX){
            return -1;
        }

        return minCoinsDP[amount];

    }
};
