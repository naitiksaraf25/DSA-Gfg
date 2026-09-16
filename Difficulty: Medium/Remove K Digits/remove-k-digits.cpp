class Solution {
	public:
	string removeKdig(string &s, int k) {
		// code here
		stack<char> st;
		string ans = "";
		for (int i = 0; i < s.size(); i++) {
			while (!st.empty() && k
			> 0 && st.top() > s[i]) {
				st.pop();
				k--;
			}
			st.push(s[i]);
		}
		
		while (k > 0 && !st.empty()) {
			st.pop();
			k--;
		}
		while (!st.empty()) {
			ans += st.top();
			st.pop();
		}
		reverse(ans.begin(), ans.end());
		int start = 0;
		
		while (start < ans.size() && ans[start] == '0') {
			start++;
		}
		ans = ans.substr(start);
		return ans.empty() ? "0" : ans;
	}
};
