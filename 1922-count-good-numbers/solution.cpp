class Solution {
public:
     long long MOD = 1000000007;

    long long power(long long a, long long b) {

        if (b == 0)
            return 1;

        long long half = power(a, b / 2);

        half = (half * half) % MOD;

        if (b % 2 == 1)
            half = (half * a) % MOD;

        return half;
    }
   
    int countGoodNumbers(long long n) {

        long long evenPositions = (n + 1) / 2;
        long long oddPositions = n / 2;

        long long ans = power(5, evenPositions);
