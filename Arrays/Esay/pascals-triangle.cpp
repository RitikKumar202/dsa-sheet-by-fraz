class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        vector<int> a,b;
        for(int i=1; i<=n; i++){
            a.push_back(1);
            for(int j=0; j<i-2; j++)
                a.push_back(b[j]+b[j+1]);
            if(i>1) a.push_back(1);
            v.push_back(a);
            b=a;
            a.clear();
        }
        return v;
    }
};