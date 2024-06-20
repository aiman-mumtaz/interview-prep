class Solution {
public:
    static bool cmp(const pair<string,int>& b,const pair<string,int>& a){
        return a.second<b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> vec;
        // vector<string> vec(names.size());
        for(int i=0;i<names.size();i++){
            vec.push_back(make_pair(names[i],heights[i]));
        }
        sort(vec.begin(),vec.end(),cmp);
        for(int i=0;i<vec.size();i++){
            names[i]=vec[i].first;
        }
        return names;
    }
};