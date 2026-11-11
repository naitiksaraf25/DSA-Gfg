class Solution {
	public:
	void rearrangeQueue(queue<int> &q) {
		// code here
		int n = q.size();
		queue<int>first;
		queue<int>last;
		int i = 1;
		while (i <= n/2)
			{
			first.push(q.front());
			q.pop();
			i++;
		}
		while (i <= n)
			{
			last.push(q.front());
			q.pop();
			i++;
		}
		while (!first.empty() && !last.empty())
			{
			q.push(first.front());
			first.pop();
			q.push(last.front());
			last.pop();
		}
		
	}
};
