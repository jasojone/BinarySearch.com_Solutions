int solve(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    vector<string> chars(n);
    
    for (int i = 0; i < nums.size(); i++){
        chars[i] = to_string(nums[i]);
    }

    for (int i = 0; i < chars.size(); i++){
        if (chars[i].length() % 2){
            count++;
        }
    }
    return count;
}