bool solve(string s) {
    string a = s;
    reverse(s.begin(), s.end());
    // if (s==a)
    // return true;
    // else 
    // return false;

    // this will work because the return statement in one comparison 
    return s == a;
}