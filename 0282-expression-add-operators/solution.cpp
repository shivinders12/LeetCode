
    result += last;
    return result;
    }

    void solve(string& num, int target, vector<string>& solution, string ans, int count) {
        if (count == num.length()) {
            if (calculate(ans) == target) solution.push_back(ans);
            return;
        }

        for (int i = count; i < num.length(); i++) {
            
            if (i > count && num[count] == '0') break;

            string x = num.substr(count, i - count + 1); 

            if (count == 0) {
                solve(num, target, solution, ans + x, i + 1);
            } else {
                solve(num, target, solution, ans + "+" + x, i + 1);
                solve(num, target, solution, ans + "-" + x, i + 1);
                solve(num, target, solution, ans + "*" + x, i + 1);
            }
        }
    }
    
