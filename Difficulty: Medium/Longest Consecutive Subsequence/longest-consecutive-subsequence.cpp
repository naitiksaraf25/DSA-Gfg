class Solution {
	public:
	int longestConsecutive(vector<int>& arr) {
		// code here
		sort(arr.begin(), arr.end());
		int ans = 0;
		int cnt = 1;
		for (int i = 0; i<arr.size(); i++)
			{
			if (arr[i]+1 == arr[i + 1])
				cnt++;
			else if (arr[i] == arr[i + 1])
				continue;
			else
				{
				ans = max(ans, cnt);
				cnt = 1;
			}
		}
		ans = max(ans, cnt);
		return ans;
	}
};
