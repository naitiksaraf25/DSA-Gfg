class Solution {
	public:
	int maxProduct(vector<int> &arr, int k) {
		int n = arr.size();
		sort(arr.begin(), arr.end());
		long long ans = 1;
		int i = 0;
		int j = arr.size() - 1;
		
		if ((arr[n - 1] <= 0 && k%2 != 0) || (arr[0] >= 0))
			{
			int idx = n - 1;
			while (k)
				{
				k--;
				ans *= arr[idx];
				idx--;
			}
			return ans;
		}
		
		if (k%2 != 0)
			{
			ans *= arr[j];
			j--;
			k--;
		}
		
		while (k>0)
			{
			long long left_prod = (long long)arr[i] * arr[i + 1];
			long long right_prod = (long long)arr[j] * arr[j - 1];
			
			if (left_prod > right_prod)
				{
				ans *= left_prod;
				i += 2;
			}
			else
				{
				ans *= right_prod;
				j -= 2;
			}
			k -= 2;
		}
		return ans;
	}
};
