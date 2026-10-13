class Solution {
	public:
	vector<int> countFreq(vector<int>& arr) {
		// Code Here
		int n = arr.size();
		sort(arr.begin(), arr.end());
		vector<int>ans;
		int sum = 0;
		for (int i = 1; i<n; i++)
			{
			sum++;
			if (arr[i] != arr[i - 1])
				ans.push_back(sum);
		}
		ans.push_back(sum + 1);
		return ans;
	}
};
