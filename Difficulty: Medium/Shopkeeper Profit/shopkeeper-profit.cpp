class Solution {
	public:
	int profit(vector<int>& arr) {
		
		int n = arr.size();
		int profit = 0;
		stack<int>st;
		
		for (int i = n - 1; i >= 0; i--)
			{
			
			while (!st.empty() && st.top() < arr[i])
				{
				st.pop();
			}
			if (!st.empty())
				{
				profit += (st.top() - arr[i]);
			}
			else
				profit += arr[i];
			
			st.push(arr[i]);
			
		}
		return profit;
	}
};
