class Solution {
	public:
	string postToPre(string s) {
		// code here
		int n = s.size();
		int i = 0;
		stack<string>st;
		while (i<n)
			{
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
				{
				st.push(string(1, s[i]));
			}
			else
				{
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string cons = s[i]+ b + a;
				st.push(cons);
			}
			i++;
		}
		return st.top();
	}
};
