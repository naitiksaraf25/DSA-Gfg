class Solution {
	public:
	vector<int> topKFreq(vector<int> &arr, int k) {
		// Code here
		unordered_map<int, int> mp;
		for (int num : arr) {
			mp[num]++;
		}
		vector<int> count;
		for (auto& pair : mp) {
			count.push_back(pair.first);
		}
		sort(count.begin(), count.end(), [&](int a, int b) {
			if (mp[a] == mp[b]) {
				return a > b;
			}
			return mp[a] > mp[b];
		});
		vector<int> result(count.begin(), count.begin() + k);
		return result;
	}
};
