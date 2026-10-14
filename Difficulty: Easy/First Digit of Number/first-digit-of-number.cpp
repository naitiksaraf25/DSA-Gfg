int firstDigit(int n) {
    // code here
    int ans = 0;
    while(n>0)
    {
        int x = n%10;
        n = n/10;
        ans = x;
    }
    return ans;
}