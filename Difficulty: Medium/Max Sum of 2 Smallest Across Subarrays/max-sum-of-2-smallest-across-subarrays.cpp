class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int curr = 0;
        int sum = INT_MIN;
        int maxi = 0;
        for(int i=0;i<n-1;i++)
        {
            curr = arr[i]+arr[i+1];
            if(curr>sum)
            {
                sum = curr;
                maxi = max(maxi,sum);
            }
        }
        return maxi;
    }
};