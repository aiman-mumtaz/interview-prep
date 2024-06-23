class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<string> v;
        stringstream ss(s);
        string p;
        while(ss >> p){
            v.push_back(p);
        }
        int maxx = INT_MIN;
        
        for(auto x: v){
            if(x[0] >= '0' && x[0] <= '9'){
                if(stoi(x) <= maxx){
                    return false;
                }
                maxx = stoi(x);
            }
        }
        return true;
    }
};