// my solution log(O)n due to the sort first. 

// bool solve(vector<int>& nums) {

//     sort (nums.begin(), nums.end());

//     if (*(nums.end()-1) > (*(nums.end()-2))*2)
//     return true;
//     else 
//     return false;
    
// }


//voids solution liner complexity O(n).
bool solve(vector<int>& nums) {
int a = -1, b = -1;
for (int x: nums){
    if (a == -1){
        a = x; 
    }
    else{
        if (x >= a){
            b = a;
            a = x;
        }
        else if(x > b){
            b = x;
        }
    }
}
return a > 2*b;
    
}
