
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
            st.push_back(intervals[i][0]);
                groups++;
                ans = max(ans, groups);
                i++;
            }
        }

        return ans;
