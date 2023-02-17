class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n = v.size(), j=0;
        vector<int> ans(n,0);
        for(int i=0; i<n; i++){
            if(v[i]!=0){
                ans[j]=v[i];
                j++;
            }
        }
        v=ans;
    }
};