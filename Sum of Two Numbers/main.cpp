// greedy solution O(n)^2 this solution times out
// bool solve(vector<int>& nums, int k) {
//     int ans = 0;
//     for(int i = 0; i < nums.size(); i++){
//         for (int j = (i + 1); j < nums.size(); j++){
//             cout << "i= " << nums[i] << endl;
//             cout << "j= " << nums[j] << endl;
//             if(nums[i] + nums[j] == k)
//             return true;
//         }
//     }
//     return false;
// }
// two pointer solution
// bool solve(vector<int>& nums, int k) {
//     int n = nums.size();
//     int l, r;
//     l = 0;
//     r = n - 1;
//     sort(nums.begin(), nums.end());
//     while(l < r){
//         if (nums[l] + nums[r] == k)
//         return 1;
//         else if(nums[l] + nums[r] < k)
//         l++;
//         else if(nums[l] + nums[r] > k)
//         r--;
//     }
//     return 0;
// }

// hash table solution with an unordered set
bool solve(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_set<int> s;
    for(int i= 0; i < n; i++){
        if(s.find(nums[i]) != s.end())
            return 1;
        else
        s.insert(k - nums[i]);
    }
    return 0;
}