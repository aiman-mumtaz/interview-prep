class Solution {
public:
    vector<int> pivotArray(vector<int>& a, int pivot) {
        vector<int>lesser,greater,equal;
        for(int i=0;i<a.size();i++){
            if(a[i] < pivot){
                lesser.push_back(a[i]);
            }else if(a[i] > pivot){
                greater.push_back(a[i]);
            }else{
                equal.push_back(a[i]);
            }
        }
        lesser.insert(lesser.end(),equal.begin(),equal.end());
        lesser.insert(lesser.end(),greater.begin(),greater.end());
        return lesser;
    }
};