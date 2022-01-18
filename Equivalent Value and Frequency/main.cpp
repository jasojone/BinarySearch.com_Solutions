//https://binarysearch.com/problems/Equivalent-Value-and-Frequency
bool solve(vector<int>& nums) {
    map<int, int> m;
    for(int i = 0; i<nums.size(); i++){
        m[nums[i]]++;
        //m.insert(pair<int, int>(nums[i], 1))
    }
    //for(map<int, int>::iterator it = m.begin(); it != m.end(); it++){
    for(auto it = m.begin(); it != m.end(); it++){
        if(it-> first == it-> second){
            return 1;
        }
    }
    return 0;
}