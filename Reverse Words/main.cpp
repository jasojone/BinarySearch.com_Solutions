string solve(string s) {
    reverse(s.begin(), s.end());
    int j = 0;

    for (int i = 0; i < s.size(); i++ ){
        if (isspace(s[i])) {
            reverse(s.begin()+j, s.begin()+i);
            j = i+1;
        }      
    }
    reverse(s.begin()+j, s.end());
    return s;
}
// string stream credit **Void**
// string solve(string sentence) {
//     stringstream s(sentence);
//     string word, ans;
//     while( s >> word){
//         ans = word + ans;
//         ans = " " + ans;
//     }
//     if (ans.size()){
//         ans.erase(ans.begin());
//     }
//     return ans;
// }