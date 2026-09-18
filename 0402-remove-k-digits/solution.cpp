class Solution {
public:
    string removeKdigits(string num, int k) {

        string st;

        for (char digit : num) {

            while (!st.empty() &&
                   st.back() > digit &&
                   k > 0) {
                st.pop_back();
                k--;
            }

            st.push_back(digit);
        }

      
        while (k > 0) {
            st.pop_back();
            k--;
        }

       
