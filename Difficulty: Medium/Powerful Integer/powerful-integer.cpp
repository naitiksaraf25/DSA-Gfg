class Solution {
	public:
	int powerfulInteger(vector<vector<int>> & arr, int k) {
		// code here
		map<int, int>mp;
		for (auto it : arr
		) {
			mp[it[0]]++;
			mp[it[1]+1]--;
		}
		int h = 0;
		int ans = -1;
		int prev = LLONG_MIN;
		bool is = false;
		for (auto it : mp) {
			h += it.second;
			if (is) {
				ans = max(prev, it.first - 1);
			}
			if (h >= k) {
				is = true;
			}
			else {
				is = false;
			}
			prev = it.first;
		}
		return ans;
	}
};
