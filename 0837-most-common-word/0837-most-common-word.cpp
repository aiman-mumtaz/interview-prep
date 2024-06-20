class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        for(auto &ch : s){
            if(!isalpha(ch)){
                ch= ' ';
            }
            ch=tolower(ch);
        }
        map<string,int> mpp;
        
        string p;
        istringstream iss(s);
        while ( iss>>p ) {
            if(find(banned.begin(),banned.end(),p.c_str()) == banned.end())
                mpp[p.c_str()]++;
        }
        pair<string,int> px;
        for(auto x:mpp){
            if(px.second < x.second){
                px.first = x.first;
                px.second = x.second;
            }
        }
        return px.first;
    }
};