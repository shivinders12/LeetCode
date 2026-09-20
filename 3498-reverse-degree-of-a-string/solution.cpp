class Solution {
public:
    int reverseDegree(string s) {

        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int index=i+1;
            int index2='z'-s[i]+1;
            int value = index*index2;
            ans= ans+value;
        }

        return ans;
        
    }
};
