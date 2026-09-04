            return;
        }
        
        if (open < n) {
            solve(s + '(', open + 1, close, n, ans);
        }

        
        if (close < open) {
            solve(s + ')', open, close + 1, n, ans);
        }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=0;
        int close=0;
    }
            ans.push_back(s);
        if (s.length() == 2 * n) {
        
        solve("",0,0,n,ans);
        return ans;
    }
};
