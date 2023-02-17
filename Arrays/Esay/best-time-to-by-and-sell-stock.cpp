#define all(a) (a).begin(), (a).end()
class Solution
{
public:
    int maxProfit(vector<int> &a)
    {
        int mx = INT_MAX, n = a.size(), res = INT_MIN, k;
        for (int i = 0; i < n; i++)
        {
            mx = min(mx, a[i]);
            k = a[i] - mx;
            res = max(res, k);
        }
        if (res > 0)
            return res;
        return 0;
    }
};