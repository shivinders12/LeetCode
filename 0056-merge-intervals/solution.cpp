        int s = intervals[0][0];
        int e = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] > e) {
                ans.push_back({s, e});
                s = intervals[i][0];
                e = intervals[i][1];
            }
            else {
                e = max(e, intervals[i][1]);
            }
        }

        ans.push_back({s, e});
        return ans;
    }
};


