class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        map<int, int> m;
        vector<int> ans;
        for(auto x:v)
            m[x]++;
        for(auto x:m)
            ans.push_back(x.first);
        v=ans;
        return m.size();
    }
};