class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        if(a.size()<=1){
            return a.size();
        }
        int j=1;
        for(int i=0;i<a.size();i++){
            if((j<a.size()) && (a[i] == a[j]) ){
                // cout<<j<<endl;
                a.erase(a.begin()+j-1);
                i--;
            }else{
                j++;
            }
        }
        return a.size();
    }
};