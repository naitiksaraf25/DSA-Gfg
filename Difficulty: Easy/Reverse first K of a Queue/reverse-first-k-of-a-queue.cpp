class Solution {
	public:
	queue<int> reverseFirstK(queue<int> q, int k) {
		// code here
		int n = q.size();
		stack<int>s;
		if (n<k)
			{
			return q;
		}
		while (k>0)
			{
			s.push(q.front());
			q.pop();
			k--;
		}
		
		queue<int>q1;
		while (!s.empty())
			{
			q1.push(s.top());
			s.pop();
		}
		while (!q.empty())
			{
			q1.push(q.front());
			q.pop();
		}
		return q1;
		
	}
};
