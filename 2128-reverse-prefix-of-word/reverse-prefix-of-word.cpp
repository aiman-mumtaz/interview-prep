class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int cnt = 0;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                cnt = i;
                break;
            }
        }
        for(int i=0;i<=cnt;i++){
            st.push(word[i]);
        }
        int i =0;
        while(!st.empty()){
            word[i++] = st.top();
            st.pop();
        }
        return word;
    }
};