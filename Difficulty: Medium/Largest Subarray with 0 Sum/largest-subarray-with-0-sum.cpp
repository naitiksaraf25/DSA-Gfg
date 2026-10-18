class Solution {
	public:
	int maxLength(vector<int>& arr) {
		// code here
		int n = arr.size();
		int i = 0;
		int sum = 0;
		int maxi = 0;
		unordered_map<int, int>mp;
		while (i<n) {
			sum += arr[i];
			if (sum == 0)
				maxi = max(maxi, i + 1);
			if (mp.find(sum) != mp.end())
				maxi = max(maxi, i - mp[sum]);
			else
				mp[sum] = i;
			
			i++;
		}
		return maxi;
	}
};
