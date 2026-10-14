class Solution {
	public:
	bool areKAnagrams(string &s1, string &s2, int k) {
		// code here
		if (s1.size()
			 != s2.size())return false;
		// 		unordered_map<char, int>mp;
		// 		unordered_map<char, int>mp2;
		vector<int>c1(26, 0);
		vector<int>c2(26, 0);
		
		for (int i = 0; i<s1.size(); i++)
			{
			c1[s1[i]-'a']++;
			c2[s2[i]-'a']++;
		}
		int count = 0;
		for (int i = 0; i<26; i++)
		{
		    if(c1[i]>c2[i])
		        count += (c1[i] - c2[i]);
		}
		return count <= k;
	}
};
