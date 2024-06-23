class Solution {
public:
    double minimumAverage(vector<int>& a) {
        sort(a.begin(),a.end());
        vector<double> avg;
        for(int i=0;i<a.size()/2;i++){
            double minn = a[i];
            double maxx=a[a.size()-i-1];
            avg.push_back((minn+maxx)/2);
        }
        // for(auto x:avg){
        //     cout<<x<<" ";
        // }
        double min = INT_MAX;
        for(int i=0;i<avg.size();i++){
            if(avg[i]<min){
                min =avg[i];
            }
        }
        // sort(avg.begin(),avg.end());
        // return avg[0];
        return min;
    }
};