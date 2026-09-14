class Solution {
	public:
	int pairCount(int x, int y) {
		// code here
		if (y % x != 0)
			return 0;
		int n = 0;
		int result = 0;
		n = y/x;
		if (n == 1)return 1;
		for (int i = 1; i <= std::sqrt(n); i++) {
			if (n % i == 0) {
				int j = n / i;
				
				// i and j must be coprime
				if (std::gcd(i, j) == 1) {
					if (i == j) {
						result += 1; // e.g., x = 5, y = 5 -> pair (5, 5)
					} else {
						result += 2; // (a, b) and (b, a)
					}
				}
			}
		}
		return result;
	}
};
