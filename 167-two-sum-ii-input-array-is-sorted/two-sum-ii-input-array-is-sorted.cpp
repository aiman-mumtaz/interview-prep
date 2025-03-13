class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int i=0,j=a.size()-1;
        while(i<=j){
            if(a[i]+a[j] == target){
                return {i+1,j+1};
            }else if(a[i] + a[j] < target){
                i++;
            }else{
                j--;
            }
        }
        return {1,1};
    }
};