class Solution {
	public:
	int toyCount(vector<int>& arr, int k) {
		// code here
		sort(arr.begin(), arr.end());
		int count = 0;
		for (int i = 0; i<arr.size(); i++)
			{
			if (k - arr[i] >= 0) {
				k -= arr[i];
				count++;
			}
		}
		return count;
	}
};
