class Solution {
  public:
    vector<int> getDistinctDifference(vector<int> &arr) {
        // code here
        set<int>left;
        set<int>right;
        int n = arr.size();
        vector<int>l(n),r(n),ans(n);
        
        for(int i=0;i<n;i++)
        {
            l[i]=left.size();
            left.insert(arr[i]);
            r[n-i-1] = right.size();
            right.insert(arr[n-i-1]);
        }
        for(int i=0;i<n;i++)
        {
            ans[i] = l[i]-r[i];
        }
        return ans;
        
    }
};
