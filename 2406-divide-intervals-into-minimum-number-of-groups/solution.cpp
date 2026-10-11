
        sort(st.begin(), st.end());
        sort(ed.begin(), ed.end());

        int groups = 0;
        int ans = 0;
        int i = 0, j = 0;
        int n = intervals.size();

        while (i < n) {
            if (st[i] > ed[j]) {
                groups--;
                j++;
            } else {
        }
            ed.push_back(intervals[i][1]);
        for (int i = 0; i < intervals.size(); i++) {
            st.push_back(intervals[i][0]);
        vector<int> st, ed;

public:
    int minGroups(vector<vector<int>>& intervals) {
class Solution {
