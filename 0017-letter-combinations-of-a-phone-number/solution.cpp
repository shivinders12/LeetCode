        string value = mapping[num];

        for (int j = 0; j < value.length(); j++) {
            output.push_back(value[j]);
            solve(digit, output, i + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digit) {
        vector<string> ans;
        if (digit.length() == 0) {
            return ans;
        }
        int i = 0;
        string output;
        int num = digit[i] - '0';

        }
            return;
            ans.push_back(output);
        if (i >= digit.length()) {
    void solve(string digit, string output, int i, vector<string>& ans,string mapping[]) {
private:
class Solution {
