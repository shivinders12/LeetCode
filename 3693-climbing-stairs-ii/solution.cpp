public:

        vector<int> dp(n + 1, INT_MAX);

        dp[0] = 0;

                    dp[i] = min(dp[i],
        for (int i = 1; i <= n; i++) {


    int climbStairs(int n, vector<int>& costs) {
            for (int j = 1; j <= 3; j++) {

                if (i - j >= 0) {
                        dp[i-j] + costs[i-1] + j*j);
                }
            }
        }

        return dp[n];
    }
};
