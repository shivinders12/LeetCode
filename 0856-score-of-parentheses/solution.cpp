        int score = 0;
        int level = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                level++;
            }
            else {
                level--;

                
                if (s[i - 1] == '(') {
                    score += (1 << level);
                }
            }
        }

        return score;
    int scoreOfParentheses(string s) {
class Solution {
public:
