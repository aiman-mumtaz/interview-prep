class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        vector<string> v;
        int i=0,j=1;
        while(j<a.size()){
            string str1 = to_string(a[i]);
            string str2="";
            while((j<a.size()) && (a[i]+1 == a[j])){
                str2 = to_string(a[j]);
                i++;
                j++; 
            }
            string tmp = "";
            if(str2.length()>0){
                tmp= str1+"->"+str2;
            }else{
                tmp = str1;
            }
            v.push_back(tmp);
            i++;
            j++;
        }
        // cout<<j<<endl;
        if(j==a.size()){
            v.push_back(to_string(a[j-1]));
        }
        return v;
    }
};