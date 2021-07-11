int solve(int n) {
   vector<int> vec;
   
    for (int i = 0; i<=n; i++){
        vec.push_back(i);
    }

    for (int i = 1; i <= n; i++){
        if (i == 1 || i ==2){
        vec[i] = 1;
        }
        else
        vec[i] = vec[i-1] + vec[i-2];
    }
    return vec[n];
}
// space complexity: constant space the vector is not dependant on the size of n. The vector stays at size of 2
// int solve(int n) {
//     vector<int> fib(2);
//     fib[0] = fib[1] = 1;
//     for(int i = 0; i < n-1; i++){
//         int newFib = fib[0] + fib[1];
//         fib[0] = fib[1];
//         fib[1] = newFib;
//     }
//     return fib[0];
// }