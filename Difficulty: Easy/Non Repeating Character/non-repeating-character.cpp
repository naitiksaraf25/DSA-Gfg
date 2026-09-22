class Solution {
	public:
	char nonRepeatingChar(string &s) {
		//  code here
		vector<int>freq(26, 0);
		for (int i = 0; i<s.size(); i++)
		{
		    int x = s[i]-'a';
		    freq[x]++;
		}
		for(int i=0;i<s.size();i++)
		{
		    int x = s[i]-'a';
		    if(freq[x]==1)
		    {
		        return s[i];
		    }
		}
		return '$';
	}
};
