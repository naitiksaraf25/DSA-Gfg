class Solution {
	public:
	void binSort(vector<int> &arr) {
		// code here
		int one = 0;
		int zero = 0;
		for (int x:arr)
			{
			if (x == 0)zero++;
			else
				one++;
		}
		for (int i = 0; i<arr.size(); i++)
			{
			if (zero>0)
				{
				arr[i] = 0;
				zero--;
			}
			else if (one>0)
				{
				arr[i] = 1;
				one--;
			}
		}
	}
};
