class Solution {
  public:
    string removePair(string &s) {
        // code here
        stack<char>st;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty() || st.top()!=s[i])
                st.push(s[i]);
            
            else
                st.pop();
        }
        
        if(st.empty())return "-1";
        
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
