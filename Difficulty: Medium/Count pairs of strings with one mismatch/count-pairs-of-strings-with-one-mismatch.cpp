class Solution {
	public:
	int countPairs(vector<string>& arr) {
		// code here
		
		unordered_map<string, int>m;
		for (auto x:arr) {
			string temp = x;
			for (int i = 0; i<temp.size(); i++) {
				string curr = temp;
				curr[i] = '*';
				m[curr]++;
			}
		}
		int ans = 0;
		for (auto x:m) {
			ans += ((x.second*(x.second - 1))/2);
		}
		return ans;
	}
};
