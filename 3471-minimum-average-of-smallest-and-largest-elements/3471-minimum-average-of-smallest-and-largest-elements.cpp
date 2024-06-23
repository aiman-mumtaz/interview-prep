class Solution {
public:
    double minimumAverage(vector<int>& a) {
        sort(a.begin(),a.end());
        vector<double> avg;
        for(int i=0;i<a.size()/2;i++){
            avg.push_back(double(a[i]+a[a.size()-i-1])/2);
        }
        double min = INT_MAX;
        for(int i=0;i<avg.size();i++){
            if(avg[i]<min){
                min =avg[i];
            }
        }
        return min;
    }
};