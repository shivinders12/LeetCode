            else if(s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if(st.empty())
                    return false;

                char c = st.top();

                if((s[i] == ')' && c == '(') ||
            }

            // Closing brackets
            {
                st.push(s[i]);
        {
            // Opening brackets
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')

        stack<char> st;

        for(int i = 0; i < s.length(); i++)
class Solution {
public:
    bool isValid(string s) {
