class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for (string str : tokens){
            if (str=="+"){
                int op1=st.top();
                st.pop();
                int op2=st.top();
                st.pop();
                int res=op1+op2;
                st.push(res);
            }
            else if (str=="-"){
                int op1=st.top();
                st.pop();
                int op2=st.top();
                st.pop();
                int res=op2-op1;
                st.push(res);
            }
            else if (str=="*"){
                int op1=st.top();
                st.pop();
                int op2=st.top();
                st.pop();
                int res=op1*op2;
                st.push(res);
            }
            else if (str=="/"){
                int op1=st.top();
                st.pop();
                int op2=st.top();
                st.pop();
                int res=op2/op1;
                st.push(res);
            }
            else st.push(stoi(str));
        }
        return st.top();
    }
};
