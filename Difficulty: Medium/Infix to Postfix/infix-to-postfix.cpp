class Solution {
	public:
	int pri(char c)
	{
		if (c == '^')
			return 3;
		else if (c == '*' || c == '/')
			return 2;
		else if (c == '+' || c == '-')
			return 1;
		else
			return - 1;
	}
	
	string infixToPostfix(string& s) {
		// code here
		stack<char>st;
		string ans = "";
		for (int i = 0; i<s.size(); i++)
			{
			char ch = s[i];
			if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
				{
				ans += ch;
			}
			else if (ch == '(')
				st.push(ch);
			
			else if (ch == ')')
				{
				while (!st.empty() && st.top() != '(')
					{
					ans += st.top();
					st.pop();
				}
				if (!st.empty())
					st.pop();
			}
			else
				{
				while (!st.empty() && (
				(ch != '^' && pri(ch) <= pri(st.top())) ||
				(ch == '^' && pri(ch) < pri(st.top()))
				))
				{
					ans += st.top();
					st.pop();
				}
				st.push(ch);
			}
		}
		while (!st.empty())
			{
			ans += st.top();
			st.pop();
		}
		return ans;
		
	}
};
