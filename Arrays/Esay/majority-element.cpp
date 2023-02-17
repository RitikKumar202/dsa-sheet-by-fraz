class Solution {
public:
    int majorityElement(vector<int>& v) {
        map<int,int>m;
        int mx=INT_MIN,ans;
        int n = v.size()/2;
        for(auto x:v){
            m[x]++;
        }
        for(auto it:m){
            if(it.second>=n){
                mx=max(mx,it.second);
                if(it.second==mx)
                    ans=it.first;
            }
        }
        return ans;
    }
};