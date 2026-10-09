                ans.push_back(help);

            }
            else{
                //overlap
                os = min(os, intervals[i][0]);
                oe = max(oe, intervals[i][1]);
            }
        }
        vector<int> overlaped;
        overlaped.push_back(os);
        overlaped.push_back(oe);
        ans.push_back(overlaped);
        sort(ans.begin(), ans.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        return ans;
        
    }
};
