int solve(int n) {
    
    int factorial = 1;

    for (int i = 1; i <= n; ++i){
        factorial *= i;
    }

    return factorial;
}

// initially I thought that a two dimensional aray would be needed here to create a bruit 
// force simulation of the cases. After runnign some test cases I realized that this can 
// simply be solved using math. I realized after some time that this can be solved using a
// factorial formula. 