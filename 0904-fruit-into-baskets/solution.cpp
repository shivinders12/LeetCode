class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        vector<int> help(100001, 0);
        int maxlen = 0;
        int distinct = 0;
        int l = 0, r = 0;

        while (r < fruits.size()) {
            if (help[fruits[r]] == 0) distinct++;  
            help[fruits[r]]++;

            while (distinct > 2) {                  
                help[fruits[l]]--;
                if (help[fruits[l]] == 0) distinct--;
                l++;
            }

            maxlen = max(maxlen, r - l + 1);     
            r++;
        }
        return maxlen;
    }
