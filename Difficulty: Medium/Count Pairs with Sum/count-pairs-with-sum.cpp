class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int>mp;
        int cnt =0;
        for(int i=0;i<arr.size();i++)
        {
            int reqd = target - arr[i];
            if(mp.find(reqd) != mp.end()){
                cnt += mp[reqd];
            }
            mp[arr[i]]++;
        }
        return cnt;
        
    }
};