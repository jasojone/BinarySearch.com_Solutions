// this only works with all posotive integers
// int solve(vector<int>& nums) {
//     sort(nums.rbegin(), nums.rend());
//     int ans = 1;
//     for(int i = 0; i < 3; i++){
//         ans *= nums[i];
//     }

//     return ans;
// }


// int solve(vector<int>& nums) {
//     sort(nums.rbegin(), nums.rend());
//     int ans = 1;
//     if(nums.back() < 0){
//         for(int i = 0; i < 3; i++){
//             ans *= nums[i];
//         }

//     return ans;
// }


int solve(vector<int>& nums) {
    sort(nums.rbegin(), nums.rend());
    int ans = 1, ans2 = 1;
    int n = nums.size();
    for(int i = 0; i < 3; i++){
        ans *= nums[i];
        cout << "ans= " << ans << endl;
    }
    if(ans == 0 || ans < 0){
        if(nums.back() < 0 && nums[n-2] < 0){
            if(nums.back() * nums[0] * nums[1] > nums.back() * nums[n-2] * nums[0])
            //cout << nums.back() << " * " << nums[0] << " * " << nums[1] << endl;
            ans2 = nums.back() * nums[0] * nums[1];
            else
            ans2 = nums.back() * nums[n-2] * nums[0];
        return ans2;
        }
        else 
        return ans;
        
    }
    return ans;
}



int solve(vector<int>& nums) {

}
