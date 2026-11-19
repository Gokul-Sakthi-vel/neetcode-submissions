class MinStack {
public: 
    stack<int> st;
    stack<int> min;
    MinStack() {}
    
    void push(int val) {
        if(min.empty()||min.top()>=val){
            min.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(st.top()==min.top()){
            min.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.top();
    }
};
