class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        for(auto &ch : s){
            if(!isalpha(ch)){
                ch= ' ';
            }
            ch=tolower(ch);
        }
        // cout<<s<<endl;
        map<string,int> mpp;
        // vector<string> str;
        string p;
        istringstream iss(s);
        while ( iss>>p ) {
            if(find(banned.begin(),banned.end(),p.c_str()) == banned.end())
                mpp[p.c_str()]++;
        }
        // sort(mpp.begin(),mpp.end(),comp);
        pair<string,int> px;
        for(auto x:mpp){
            // cout<<x.first<<" "<<x.second<<endl;
            if(px.second < x.second){
                px.first = x.first;
                px.second = x.second;
            }
        }
        // cout<<px.first<<" "<<px.second;
        return px.first;
    }
};