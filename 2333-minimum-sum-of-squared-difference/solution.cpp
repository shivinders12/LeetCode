        vector<int> help(100001, 0);

        for(int i = 0; i < nums1.size(); i++) {
            int x = abs(nums1[i] - nums2[i]);
            help[x]++;
        }

        for(int i = 100000; i > 0 && k > 0; i--) {
            int x = min((long long)help[i], k);

            help[i] -= x;
            help[i - 1] += x;
            k -= x;
        }

        for(int i = 1; i <= 100000; i++) {
            ans += 1LL * i * i * help[i];
        }

        return ans;
    }
};

