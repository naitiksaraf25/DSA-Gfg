class Solution {
	public:
	vector<int> nextGreater(vector<int> &arr) {
		// code here
		stack<int>st;
		st.push(-1);
		vector<int>ans(arr.size());
		for (int i = arr.size() - 1; i >= 0; i--)
		{
			st.push(arr[i]);
		}
		for (int i = arr.size() - 1; i >= 0; i--)
			{
			int curr = arr[i];
			while (st.top() != -1 && st.top() <= curr)
				{
				st.pop();
			}
			ans[i] = st.top();
			st.push(curr);
		}
		return ans;
	}
};
