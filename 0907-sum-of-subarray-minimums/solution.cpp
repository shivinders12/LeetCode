
            st.pop();
        while(!st.empty())

        }
            st.push(i);

            else
                left[i] = i - st.top();
            if(st.empty())
                left[i] = i + 1;

                st.pop();

        vector<int> left(n), right(n);
        stack<int> st;

     
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] >= arr[i])
        const long long MOD = 1e9 + 7;
        int n = arr.size();

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] > arr[i])
                st.pop();
