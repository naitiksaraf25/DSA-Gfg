class Solution {
	public:
	int minSubarraySum(vector<int> &arr) {
		// code here
		int res = arr[0];
		int mini = arr[0];
		for (int i = 1; i<arr.size(); i++) {
			mini = min(arr[i], mini + arr[i]);
			res = min(res, mini);
		}
		return res;
	}
};
