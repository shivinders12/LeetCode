        while(i < s.length() && s[i] >= '0' && s[i] <= '9')
        {
            ans = ans * 10 + (s[i] - '0');

            if(!negative && ans > INT_MAX)
                return INT_MAX;

            if(negative && -ans < INT_MIN)
                return INT_MIN;

            i++;
        }

        if(negative)
            return -ans;

        return ans;
    }
};
        }

