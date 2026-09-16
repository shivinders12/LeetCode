
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] > arr[i])
                st.pop();

            if(st.empty())
                right[i] = n - i;
            else
                right[i] = st.top() - i;

            st.push(i);
        }

        long long ans = 0;

        for(int i = 0; i < n; i++) {
            ans = (ans + (long long)arr[i] * left[i] * right[i]) % MOD;
        }

        return ans;
    }
};
