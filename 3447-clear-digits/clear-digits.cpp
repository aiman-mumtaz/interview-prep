class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i] >= '0' && s[i] <= '9' && !st.empty()){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        s = "";
        while(!st.empty()){
            s.insert(0,1,st.top());
            st.pop();
        }
        return s;
    }
};