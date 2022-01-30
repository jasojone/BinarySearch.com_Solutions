//https://binarysearch.com/problems/Number-of-Unique-Character-Substrings
// unfinished solution
// int solve(string s) {
//     unordered_map<char, int> m;
//     for(int i = 0; i < s.size(); i++)
//     {
//         // if(m.count(s[i]) == 0)
//         // m.insert({s[i], 0});
//         // else
//         // {
//         // make_pair
//         // pair<char, int>
//         //     int val = m[s[i]];
//         //     m[s[i]] = cal+1
//         // }
//         m[s[i]]++;

//     }
//     int uCount = m.size();
//     int sCount = s.size();

    
// }

int solve(string s) {
    int n = s.length();
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int j = i;
        while(j < n && s[j] == s[i])
        {
            //counts the repetitive chars
            j++;
        }
        int cnt = j - i;
        // adds summation 
        ans += (cnt*(cnt+1))/2;
        // sets i at the next unique char
        i = j - 1;
    }
    return ans;
}
