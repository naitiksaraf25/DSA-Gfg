class Solution {
	public:
	int countNonRepeated(vector<int>& arr) {
		//  code here
		unordered_map<int, int>mp;
		for (int i = 0; i<arr.size(); i++)
			{
			mp[arr[i]]++;
		}
		int ans =0;
		for (auto z:mp) {
			if(z.second==1)
			ans++;
		}
		return ans;
	}
};
