class Solution {
public:
    bool isValid(string s) {
        // if(s.length() == 1){
        //     return false;
        // }
        stack<char> st;
        for(auto x : s) {
            if(x == '(' || x == '[' || x == '{'){
                st.push(x);
            }else{
                if(x == ')'){
                    if(!st.empty() && st.top() == '('){
                        st.pop();
                    }else{
                        return false;
                    }
                }else if(x == '}'){
                    if(!st.empty() && st.top() == '{'){
                        st.pop();
                    }else{
                        return false;
                    }
                }else{
                    if(!st.empty() && st.top() == '['){
                        st.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        return st.empty() ? true : false;
    }
};