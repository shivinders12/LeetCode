        if (n == 0)
            return 1;

        double half = power(x, n / 2);

        double result = half * half;

        if (n % 2 != 0)
            result = result * x;

        return result;
    }

    double myPow(double x, int n) {

        long long N = n;

        if (N < 0) {
            return 1.0 / power(x, -N);
        }


        return power(x, N);
    }
};
