class Solution {
  public:
    int getTwinCount(vector<int> &arr) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int ans =0;
        for(auto it:mp)
        {
            ans += it.second - (it.second%2);
        }
        return ans;
    }
};