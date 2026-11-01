class Solution {
	public:
	// Function to check whether the array contains
	// a set of contiguous integers
	bool areElementsContiguous(vector<int>& arr) {
		// Complete the function
		sort(arr.begin(), arr.end());
		
		for (int i = 0; i<arr.size() - 1; i++) {
			if (arr[i] == arr[i + 1])
				continue;
			
			if (arr[i]+1 != arr[i + 1])
				return false;
		}
		
		return true;
	}
};
