class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int x = -1;                       
        vector<int> ans;
        for (int i = 0; i < seq.length(); i++)
        {
        if (seq[i] == '(')              
        {
        x = x + 1;
        ans.push_back(x);         
         }
        else
        {
        ans.push_back(x);
        x--;
        }
        
        }
        for(int )
        return ans;
    }
};
