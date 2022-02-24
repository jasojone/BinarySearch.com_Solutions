//https://binarysearch.com/problems/Sum-of-Two-Numbers-with-Sorted-List

//two pointer solution

bool solve(vector<int>& nums, int k) {

    int i, j, n;
    i = 0;
    n = nums.size();
    j = nums.size()  - 1;

    while(i < j)
    {
        int ans = nums[i] + nums[j];

        if(ans < k)
        {
            i++;
        }
        else if( ans > k)
        {
            j--;
        }
        else if(ans == k)
        {
            return true;
        }
    }
    return false;
    
}