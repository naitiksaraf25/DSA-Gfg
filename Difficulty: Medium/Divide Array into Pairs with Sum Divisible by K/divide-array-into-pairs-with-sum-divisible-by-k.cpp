class Solution {
	public:
	bool canPairs(vector<int> &arr, int k) {
		// Code here.
		int n = arr.size();
		if (n%2 != 0)
			return false;
		
		int count = 0;
		unordered_map<int, int>mp;
		for (int x : arr) {
			mp[(x % k + k) % k]++; // Handle negative numbers safely just in case
		}
		for (auto it: mp)
			{
			int rem = it.first;
			int count = it.second;
			if (rem == 0) {
				// Remainder 0 elements must be in pairs
				if (count % 2 != 0)
					return false;
			}
			else if (2 * rem == k) {
				// If remainder is exactly k/2, its count must also be even
				if (count % 2 != 0)
					return false;
			}
			else {
				// For other remainders, frequency of 'rem' must match frequency of 'k - rem'
				int complement = k - rem;
				if (mp.find(complement) == mp.end() || mp[complement] != count) {
					return false;
				}
			}
		}
		return true;
	}
};
