class MinStack {

private:
    stack <int> st;
    stack <int> minst;
    int minE;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (!st.empty()&&val<=minE) {
            minst.push(val);
            minE=val;
        }
        else if(!st.empty()) minE=min(minE,val);
        else{
            minE=val;
            minst.push(val);
        } 
        st.push(val);
    }
    
    void pop() {
        if (!st.empty()){
            if(st.top()==minst.top()){
                st.pop();
                minst.pop();
            }
            else st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
