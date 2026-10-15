class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>>ans;
        unordered_map<string,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            string str = arr[i];
            sort(str.begin(),str.end());
            if(mp.find(str) == mp.end())
            {
                mp[str] = mp.size();
                ans.push_back({});
                ans[mp[str]].push_back(arr[i]);
            }
            else
            {
                ans[mp[str]].push_back(arr[i]);
            }
        }
        return ans;
    }
};