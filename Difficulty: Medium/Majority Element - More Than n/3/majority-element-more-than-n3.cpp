class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int x : arr)
        {
            mp[x]++;
        }
        for(auto it : mp)
        {
            if(it.second>(arr.size()/3))
                ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};