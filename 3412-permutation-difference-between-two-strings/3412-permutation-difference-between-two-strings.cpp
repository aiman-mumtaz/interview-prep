class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int> s1;
        for(int i=0;i<s.length();i++){
           s1[s[i]]=i;
        }
        map<char,int> s2;
        for(int i=0;i<t.length();i++){
           s2[t[i]]=i;
        }
        // for(auto x:s1){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        int diff = 0;
        for(auto it1=s1.begin(),it2=s2.begin();it1!=s1.end(),it2!=s2.end();it1++,it2++){
            // cout<<abs(*it1-*it2)<<" ";
            int p1=it1->second;
            int p2 = it2->second;
            diff += abs(p1-p2);
        }
        return diff;
    }
};