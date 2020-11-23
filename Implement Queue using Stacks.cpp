class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(s1.size()!=1)
        {
            int cur=s1.top();
            s1.pop();
            s2.push(cur);
        }
        int ans=s1.top();
        s1.pop();
        while(!s2.empty())
        {
            int cur=s2.top();
            s1.push(cur);
            s2.pop();
        }
        return ans;
    }
    
    /** Get the front element. */
    int peek() {
        while(s1.size()!=1)
        {
            int cur=s1.top();
            s1.pop();
            s2.push(cur);
        }
        int ans=s1.top();
        //s1.pop();
        while(!s2.empty())
        {
            int cur=s2.top();
            s1.push(cur);
            s2.pop();
        }
        return ans;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
