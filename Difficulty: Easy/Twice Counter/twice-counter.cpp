class Solution {
	public:
	int countWords(vector<string> &list) {
		// code here.
		unordered_map<string, int>mp;
		for (int i = 0; i<list.size(); i++)
		{
		    	mp[list[i]]++;
		}
	    int ans = 0;
		for(auto it:mp)
		{
		    if(it.second ==2)
		        ans++;
		}
		return ans;
	}
};
