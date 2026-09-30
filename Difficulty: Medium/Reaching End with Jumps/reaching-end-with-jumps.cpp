class Solution {
  public:
    bool canReach(vector<int> &arr) {
        // code here
        int maxi =0;
        for(int i=0;i<arr.size();i++)
        {
            if(maxi<i)return false;
            maxi = max(maxi,i+arr[i]);
        }
        return true;
    }
};