class Solution {
  public:
    int minMoves(vector<int>& arr) {
        // code here
        int n  = arr.size();
        vector<int>pos(n+1);
        for(int i=0;i<n;i++)
        {
            pos[arr[i]] = i;
        }
        int current = 1;
        int longest = 1;
        
        for(int i = 1; i<n;i++)
        {
            if(pos[i] < pos[i+1])
                current++;
            
            else
                current =1;
                
            longest = max(longest,current);
        }
        return n-longest;
    }
};