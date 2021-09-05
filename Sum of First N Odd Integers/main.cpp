
//https://binarysearch.com/problems/Sum-of-First-N-Odd-Integers
// int solve(int n) {
// int oddSum = 0;

// for (int i = 0; i < n*2 ; i++){
//     if (i %2 == 1){
//     oddSum += i;
//     }
// }
// return oddSum;    
    
// int solve(int n) {
//     int add = 1, ans = 0;
//     for(int i = 0; i < n; i++){
//         ans += add;
//         add += 2;
//     }
//     return ans;
// }

int solve(int n) {
    return n*n;
}