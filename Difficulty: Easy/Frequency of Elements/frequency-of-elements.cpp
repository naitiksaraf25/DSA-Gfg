class Solution {
	public:
	vector<vector<int>> countFreq(vector<int>& arr) {
		// code here
		unordered_map<int, int>mp;
		for (int i = 0; i<arr.size(); i++)
			{
			mp[arr[i]]++;
		}
		vector<vector<int>> ans;
		for (auto z:mp) {
			vector<int>t;
			t.push_back(z.first);
			t.push_back(z.second);
			
			ans.push_back(t);
		}
		return ans;
	}
};
