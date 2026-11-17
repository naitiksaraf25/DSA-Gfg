class Solution {
	public:
	vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
		//  code here
		set<int> s;
		for (auto x : arr1)
			s.insert(x);
		for (auto x : arr2)
			s.insert(x);
		
		vector<int> result(s.begin(), s.end());
		
		return result;
	}
};
