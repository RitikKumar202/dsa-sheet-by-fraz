class Solution {
public:
    int fib_num(int k){
        int a[100];
        a[0]=0;
        a[1]=1;
        for(int i=2; i<=30; i++){
            a[i]=a[i-1]+a[i-2];
        }
        return a[k];
    }
    int fib(int n) {
        int ans = fib_num(n);
        return ans;
    }
};