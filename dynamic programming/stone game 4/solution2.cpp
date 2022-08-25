class Solution {
public:
   bool f(int n,vector<int>&dp){
        if(dp[n]!=-1) return dp[n];
        for(int i=1;i*i<=n;i++)
            if(f(n-i*i,dp)==0) 
                return dp[n]=1;
        return dp[n]=0;
    }
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,-1);
        return f(n,dp);
    }
};