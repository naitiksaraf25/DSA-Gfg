class Solution {
	public:
	bool sameFreq(string& s) {
		// code here
		vector<int>freq(26, 0);
		for (int i = 0; i<s.size(); i++)
			{
			freq[s[i] - 'a']++;
		}
		unordered_map<int, int>mp;
		for (int i = 0; i<26; i++)
			{
			if (freq[i]>0)
				{
				mp[freq[i]]++;
			}
		}
		if (mp.size()>2)return false;
		if (mp.size() == 1) {
			return true;
		}
		
		auto it = mp.begin();
		int f1 = it->first;
		int c1 = it->second;
		it++;
		int f2 = it->first;
		int c2 = it->second;
		
		if (f1 == 1 && c1 == 1)
			return true;
		
		if (f2 == 1 && c2 == 1)
			return true;
		
		if (abs(f1 - f2) == 1) {
			if (f1 > f2 && c1 == 1)
				return true;
			
			if (f2 > f1 && c2 == 1)
				return true;
		}
		
		return false;
		
	}
};
