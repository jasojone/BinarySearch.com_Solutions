//https://binarysearch.com/problems/Collatz-Sequence

int solve(int n) {
    int counter = 1;
    while (n !=1){
        if (n%2 == 0){
        n = n/2;
        counter++;
        }
        else{ 
        n = 3*n + 1;
        counter++;
        }
    }
    return counter;
}