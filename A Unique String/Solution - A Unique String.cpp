// bool solve(string s) {
//     sort(s.begin(), s.end());
//     // by casting the s.size to an int it will not underflow
//     for (int i = 0; i < (int)s.size() - 1; i++ )
//     {
//         if (s[i] == s[i+1])
//         return false;
//     }
//     return true;
// }

// here since i is an int there will be no unerflow
// always cast the size() of a container **when subtracting this is very importnant**


bool solve(string s) {
    sort(s.begin(), s.end());
    
    for (int i = 1; i < s.size(); i++ )
    {
        if (s[i-1] == s[i])
        return false;
    }
    return true;
}