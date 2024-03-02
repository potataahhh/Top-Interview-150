// TC O(N*2)
// SC O(2n)+O(2n)


class Solution {
public:

    int f(int i,int j , vector<int> &prices,vector<vector<int>> &dp){

        if(i==prices.size()){
             return 0;
             }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(j){
            return dp[i][j] = max((-1)*prices[i]+f(i+1,0,prices,dp),f(i+1,1,prices,dp));
        }
        else{
            return dp[i][j] = max(prices[i]+f(i+1,1,prices,dp),f(i+1,0,prices,dp));
        }
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,prices,dp);
    }
};
