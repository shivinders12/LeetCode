    vector<int> vt;

    StockSpanner() {}

    int next(int price) {
        vt.push_back(price);
        int i = vt.size() - 1;

        while (!st.empty() && vt[st.top()] <= price) {
            st.pop();
        }

        int span;

        if (st.empty())
            span = i + 1;
        else
            span = i - st.top();

        st.push(i);

        return span;
    }
};
