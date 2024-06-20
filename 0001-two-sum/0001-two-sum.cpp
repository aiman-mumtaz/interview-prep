class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> v(2,0);
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                if(a[i]+a[j]==target){
                    v[0]=i;
                    v[1]=j;
                }
            }
        }
        return v;
    }
};