//https://binarysearch.com/problems/Compress-String

// string solve(string s) {
//     string ans;
//     for(int i = 0; i < s.size(); i++)
//     {
//         if(s[i]!=s[i+1])
//         ans += s[i];
//     }
//     return ans;
// }
// two pointer method
// this will count how many duplicats we have with j
string solve(string s) {
    int n = s.length();
    string ans;
    for(int i = 0; i < n; i++)
    {
        int j = i;
        while(j < n && s[j] == s[i])
        {
            //counts the repetitive chars
            j++;
        }
        // adds the letter to the new condensed string
        ans += s[i];
        // sets i at the next unique char
        i = j-1;
    }
    return ans;
}