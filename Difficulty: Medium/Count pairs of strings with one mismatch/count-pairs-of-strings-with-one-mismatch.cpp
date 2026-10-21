class Solution {
	public:
	int countPairs(vector<string>& arr) {
		int ans = 0;
		int n = arr.size();
		int len = arr[0].size();
		
		for (int i = 0; i < len; i++) {
			unordered_map<string, int> freq;
			
			for (int j = 0; j < n; j++) {
				string s = arr[j];
				s[i] = '*';
				ans += freq[s];
				freq[s]++;
			}
		}
		return ans;
	}
};
