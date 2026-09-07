        vector<int> last(26, -1);

        for(int i = 1; i <= n; i++) {

          
            dp[i] = 2 * dp[i - 1] % MOD;

            int c = s[i - 1] - 'a';


        dp[0] = 1;

        vector<long long> dp(n + 1);
    int distinctSubseqII(string s) {
        const long long MOD = 1e9 + 7;
        int n = s.length();
public:

        
            if(last[c] != -1) {

                // Remove the subsequences that were already
                // generated when this character appeared previously.
                //
                // remove dp[last[c]], NOT dp[i].
                dp[i] = (dp[i] - dp[last[c]] + MOD) % MOD;
            }

            last[c] = i - 1;
        }
