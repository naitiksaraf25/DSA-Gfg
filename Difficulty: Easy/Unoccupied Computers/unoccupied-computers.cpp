class Solution {
	public:
	int solve(int n, string s) {
		unordered_map<char, int> status;
		int occupied = 0;
		int ans = 0;
		
		for (char c : s) {
			if (status[c] == 0) {
				if (occupied < n) {
					status[c] = 1;
					occupied++;
				} else {
					status[c] = 2;
					ans++;
				}
			}
			
			else if (status[c] == 1) {
				status[c] = 0;
				occupied--;
			}
			
		}
		
		return ans;
	}
};
