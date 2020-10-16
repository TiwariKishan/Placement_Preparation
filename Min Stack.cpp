class MinStack {
public:
    /** initialize your data structure here. */
    int mi;
    stack<pair<int,int> > s;
    MinStack() {
        mi=INT_MAX;
    }
    
    void push(int x) {
        mi=min(mi,x);
        s.push({x,mi});
    }
    
    void pop() {
        s.pop();
        mi=(!s.empty())? s.top().second:INT_MAX;
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return mi;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
