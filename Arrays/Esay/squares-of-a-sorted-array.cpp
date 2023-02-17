class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        vector<int> v1;
        for(auto x:v){
            long long int k = 1ll*x*x;
            v1.push_back(k);
        }
        sort(v1.begin(), v1.end());
        return v1;
    }
};