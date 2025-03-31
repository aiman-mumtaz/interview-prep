class Solution {
public:
    int minLength(string s) {
        if(s.length() < 2){
            return s.length();
        }
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if((s[i] == 'B' && !st.empty() && st.top() == 'A') || (s[i] == 'D' &&  !st.empty() && st.top() == 'C')){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};