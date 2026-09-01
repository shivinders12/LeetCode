    }
    
    void pop() {
        if(st.top() == minSt.top())
        {
            minSt.pop();
        }

        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
