        swap(a, b);
    }
    
    int pop() {
        int ans = a.front();
        a.pop();
        }

        return ans;
    }
    
    int top() {
        return a.front();
    }
    
    bool empty() {
        return a.empty();
    }
};
