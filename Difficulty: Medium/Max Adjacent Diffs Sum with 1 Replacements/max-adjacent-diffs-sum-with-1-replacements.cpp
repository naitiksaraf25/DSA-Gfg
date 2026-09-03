class Solution {
	public:
	int maxDiffSum(vector<int>& arr) {
		// code here
		int ans = 0;
		int m = 0;
		int n = 0;
		for (int i = arr.size() - 2; i >= 0; i--)
			{
			int x = max(n, abs(1 - arr[i + 1]) + m);
			int y = max(abs(arr[i]-1) + n, abs(arr[i]-arr[i + 1]) + m);
			n = x;
			m = y;
		}
		ans = max(n, m);
		return ans;
	}
};
