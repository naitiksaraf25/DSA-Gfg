class Solution {
	public:
	bool solve(int num) {
		while (num != 1 && num != 4) {
			int sum = 0;
			while (num > 0) {
				int x = num % 10;
				sum += x * x;
				num /= 10;
			}
			num = sum;
		}
		return num == 1;
	}
	int nextHappy(int n) {
		// code here
		int ans = 0;
		n++;
		while (true) {
			if (solve(n))
				{
				ans = n;
				break;
				
			}
			else
				n++;
		}
		return ans;
	}
};
