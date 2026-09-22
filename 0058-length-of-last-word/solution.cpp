class Solution {
public:
    int lengthOfLastWord(string s) {

        for(int i=s.length()-1;i>=0;i--)
        {

        }
        
        int ans=0;
            if(s[i]=='.')
            {
                continue;
            }
            if(s[i]!=' ')
            {
                ans++;
            }
            if(s[i]==' ' && ans!=0)
            {
                break;
            }
    }
        return ans;
};
