class Solution {
public:
    void solve(vector<int>& digits, vector<bool>& used, int& ans, int value, 
    int count,vector<bool>& check) {

        if (count == 3) {

            if (value % 2 == 0 && check[value]==false)
                ans++;
                check[value]=true;
            return;
        }

        for (int i = 0; i < digits.size(); i++) {

            if (used[i]) continue;
            if (count == 0 && digits[i] == 0) continue;
            used[i] = true;
            solve(digits, used, ans,value * 10 + digits[i],count + 1,check);
            used[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits) {
