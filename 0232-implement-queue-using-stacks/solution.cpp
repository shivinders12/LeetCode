        while (!a.empty())
        {
            int x = a.top();
            b.push(x);
            a.pop();
        }

        int ans = b.top();

        while (!b.empty())
        {
            int x = b.top();
            a.push(x);
            b.pop();
        }

        return ans;
    }
    
    bool empty() {
        return a.empty();
    }
};

