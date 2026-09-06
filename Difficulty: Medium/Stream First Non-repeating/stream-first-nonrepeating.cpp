class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        string ans = "";
        unordered_map<char,int>mp;
        queue<char>q;
        for(int i =0;i<s.size();i++)
        {
            char x = s[i];
            if(mp.find(x) == mp.end())
            {
                q.push(x);
                mp[x]++;
            }
            else
            {
                mp[x]++;
                while(!q.empty() && mp[q.front()]>1)
                    q.pop();
            }
            if(q.empty())
            {
                ans.push_back('#');
            }
            else
            {
                ans.push_back(q.front());
            }
            
        }
        return ans;
    }
};