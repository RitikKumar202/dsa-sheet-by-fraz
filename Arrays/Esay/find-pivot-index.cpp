class Solution {
public:
    int pivotIndex(vector<int>& v) {
        int n=v.size(), ans=-1;
        if(n==1) return 0;
        else{
            // map<int, vector<int>> m;
        int a[n],b[n];
        a[0]=v[0];
        b[n-1]=v[n-1];
        // m[b[n-1]].push_back(n-1);
        for(int i=1; i<n; i++){
            a[i]=a[i-1]+v[i];
            b[n-1-i]=v[n-i-1]+b[n-i];
            // m[b[n-1-i]].push_back(n-1-i);
        }
        for(int i=0; i<n; i++){
            if(i==0){
                if(b[1]==0){
                    ans=0;
                    break;
                }
            }
            else if(i==n-1){
                if(a[n-2]==0){
                    ans=n-1;
                    break;
                }
            }
            else{
                if(a[i-1]==b[i+1]){
                    ans=i;
                    break;
                }
            }
        }
        return ans;
        }
    }
};