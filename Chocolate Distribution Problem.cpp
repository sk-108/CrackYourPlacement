class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        int ans = INT_MAX;
        for(int i = m-1;i<n;i++)
        {
            int diff = a[i] - a[i-m+1];
            ans = min(diff,ans);
        }
        return ans;
    }   
};