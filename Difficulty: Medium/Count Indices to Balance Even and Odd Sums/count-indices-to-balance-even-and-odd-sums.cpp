class Solution {
	public:
	int cntWays(vector<int>& arr) {
		// code here
		int evesum = 0;
		int oddsum = 0;
		for (int i = 0; i<arr.size(); i++)
			{
			if (i & 1)
				oddsum += arr[i];
			else
				evesum += arr[i];
			}
		int prefEven = 0, prefOdd = 0;
		int ans = 0;
		for (int i = 0; i<arr.size(); i++)
			{
			if (i & 1)
				oddsum -= arr[i];
			else
				evesum -= arr[i];
			
			int newEven = prefEven + oddsum;
			int newOdd = prefOdd + evesum;
			
			if (newEven == newOdd)
				ans++;
			
			if (i & 1)
				prefOdd += arr[i];
			else
				prefEven += arr[i];
		}
		return ans;
	}
};
