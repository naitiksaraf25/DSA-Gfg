class Solution {
	public:
	vector<string> generateBinary(int n) {
		// code here
		vector<string>ans;
		queue<string>q;
		q.push("1");
		for (int i = 1; i <= n; i++)
			{
			string s = q.front();
			q.pop();
			ans.push_back(s);
			q.push(s + "0");
			q.push(s + "1");
		}
		return ans;
	}
};
