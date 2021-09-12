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

//new solution 9/11/21
int solve(vector<int>& nums) {

    int oddNumCount = 0;
    int n;

    for (int i = 0; i < nums.size(); i++)
    {
        int digCount = 0;
        n = nums[i];
        while (n != 0){
            n = n / 10;
            digCount++;
        }
        if (digCount % 2 == 1){
        oddNumCount++;
        }
        

    }
    return oddNumCount;
}