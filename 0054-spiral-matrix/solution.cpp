            rowmin++;

            
            for (int i = colmin; i <= colmax; i++) {
                ans.push_back(matrix[rowmin][i]);
            }
        while (rowmin <= rowmax && colmin <= colmax) {

        
        int colmax = m - 1;

        int rowmin = 0;
        int rowmax = n - 1;
        int colmin = 0;
        int m = matrix[0].size();


        int n = matrix.size();
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
class Solution {
public:
