class Solution {
	public:
	vector<int> freqInRange(vector<int>& arr, vector<vector<int>> & queries) {
		// code here
		unordered_map<int, vector<int>> mp;
		vector<int>ans(queries.size());
		for (int i = 0; i<arr.size(); i++)
			{
			mp[arr[i]].push_back(i);
		}
		for (int i = 0; i<queries.size(); i++)
			{
			int l = queries[i][0];
			int r = queries[i][1];
			vector<int>x = mp[queries[i][2]];
			
			int lb = lower_bound(x.begin(), x.end(), l) - x.begin();
			int ub = upper_bound(x.begin(), x.end(), r) - x.begin();
			
			ans[i] =ub-lb;
		}
		return ans;
	}
};
