class Solution {
	public:
	bool findSwapValues(vector<int>& a, vector<int>& b) {
		// code here
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i<a.size(); i++) {
			sum1 += a[i];
		}
		for (int i = 0; i<b.size(); i++) {
			sum2 += b[i];
		}
		int i = 0;
		int j = 0;
		while (i<a.size() && j<b.size())
			{
			int temp1 = sum1 - a[i]+b[j];
			int temp2 = sum2 + a[i]-b[j];
			
			if (temp1 == temp2)
				return true;
			else if (temp1 > temp2)
			    i++;
			else
				j++;
			
		}
		return false;
	}
};
