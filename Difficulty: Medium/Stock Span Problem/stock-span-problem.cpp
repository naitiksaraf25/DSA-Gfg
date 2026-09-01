class Solution {
	public:
	vector<int> calculateSpan(vector<int>& arr) {
		vector<int> span(arr.size());
		stack<int> stk;
		
		for (int i = 0; i<arr.size(); i++) {
			while (!stk.empty() && arr[stk.top()] <= arr[i]) {
				stk.pop();
			}
			
			if (stk.empty()) {
				span[i] = (i + 1);
			} else {
				span[i] = (i - stk.top());
			}
			
			stk.push(i);
		}
		return span;
	}
};
