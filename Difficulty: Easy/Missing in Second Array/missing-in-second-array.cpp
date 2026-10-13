class Solution {
  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        // code here
       unordered_set<int> st;
       int n = a.size();
       int m = b.size();
	    for(int i=0;i<m;i++)
	    st.insert(b[i]);

	    vector<int> ans;
	    for(int i=0;i<n;i++)
	    {
	        if(st.count(a[i])==0)
	        ans.push_back(a[i]);
	    }

	    return ans;
    }
};
