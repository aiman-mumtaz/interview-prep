class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        stack<string> v;
        string tmp;
        while(ss >> tmp){
            v.push(tmp);
        }
        s="";
        while(!v.empty()){
            s+=v.top() + " ";
            v.pop();
        }
        
        s.pop_back();
        return s;
    }
};