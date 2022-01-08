//https://binarysearch.com/problems/Just-Average

bool solve(vector<int>& nums, int k) {
    int n = nums.size();
    cout << "n= " << n << endl;
    long long m = 0;
    for(int i = 0; i < n; i++)
    {
        m += nums[i];
    }
     cout << "m= " <<  m << endl;

    int x = -k*(n-1)+m;
    cout << "x= " << x << endl;

    for(int i = 0; i < n; i++)
    {
        if(nums[i] == x && (m - x)/ (n-1) == k)
        {
            return true;
        }
    }
    return false;
}
