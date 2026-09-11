        for (int i = 0; i < digits.size(); i++) {

            if (used[i]) continue;
            if (count == 0 && digits[i] == 0) continue;
            used[i] = true;
            solve(digits, used, ans,value * 10 + digits[i],count + 1,check);
            used[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits) {

        int ans = 0;
        vector<bool> check(1000,false);
        vector<bool> used(digits.size(), false);

        solve(digits, used, ans, 0, 0,check);

        return ans;
    }
};
