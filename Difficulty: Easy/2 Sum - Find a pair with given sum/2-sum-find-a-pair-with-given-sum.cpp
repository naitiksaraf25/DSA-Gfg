class Solution {
	public:
	vector<int> twoSum(vector<int> &arr, int target) {
		// code here
		unordered_map<int, int> myMap;
		vector<int> res;
		
		for (int x: arr) {
			int rem = target - x;
			
			if (myMap.find(rem) != myMap.end()) {
				res.push_back(rem);
				res.push_back(x);
				return res;
			}
			myMap[x]++;
		}
		return res;
	}
};
