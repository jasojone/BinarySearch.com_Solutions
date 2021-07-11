// bool solve(vector<string>& moves, int x, int y) {
//     int X = 0;
//     int Y = 0;

//     for (string s : moves){
//         if (s == "EAST")
//         X++;
//         if (s == "WEST")
//         X--;
//         if (s == "NORTH")
//         Y++;
//         if (s == "SOUTH")
//         Y--;
//     }
//     if (Y == y && X == x)
//     return true;
//     else
//     return false;
    
// }

// bool solve(vector<string>& moves, int x, int y) {
//     int X = 0;
//     int Y = 0;

//     for (string s : moves){
//         if (s == "EAST")
//         X++;
//         if (s == "WEST")
//         X--;
//         if (s == "NORTH")
//         Y++;
//         if (s == "SOUTH")
//         Y--;
//     }
//     // expressions in c++ will retrun true becasue the expression is true
//     // if (true)
//     // cout << "True\n";
//     // else
//     // cout << "False\n";
//     return (Y == y && X == x);
    
// }

// with a regualr for loop
// bool solve(vector<string>& moves, int x, int y) {
//     int X = 0;
//     int Y = 0;
//     int n = moves.size();

//     for (int i = 0; i < n; i++){
//         if (moves[i] == "EAST")
//         X++;
//         if (moves[i] == "WEST")
//         X--;
//         if (moves[i] == "NORTH")
//         Y++;
//         if (moves[i] == "SOUTH")
//         Y--;
//     }
//     return (Y == y && X == x);
// }


// //usiong iterators
// bool solve(vector<string>& moves, int x, int y) {
//     int X = 0;
//     int Y = 0;
//     int n = moves.size();

//     for (vector<string>::iterator it = moves.begin(); it != moves.end(); it ++ ){
//         if (*it == "EAST")
//         X++;
//         if (*it == "WEST")
//         X--;
//         if (*it == "NORTH")
//         Y++;
//         if (*it == "SOUTH")
//         Y--;
//     }
//     return (Y == y && X == x);
// }

// removing the initilazation of new X and Y variables. 
// bool solve(vector<string>& moves, int x, int y) {
//     int n = moves.size();

//     for (vector<string>::iterator it = moves.begin(); it != moves.end(); it ++ ){
//         if (*it == "EAST")
//         x--;
//         if (*it == "WEST")
//         x++;
//         if (*it == "NORTH")
//         y--;
//         if (*it == "SOUTH")
//         y++;
//     }
//     return (x == 0 && y == 0);
// }


// fastest solution 
bool solve(vector<string>& moves, int x, int y) {
    int n = moves.size();

    for (int i = 0; i < n; i++){
        if (moves[i] == "EAST")
        x--;
        if (moves[i] == "WEST")
        x++;
        if (moves[i] == "NORTH")
        y--;
        if (moves[i] == "SOUTH")
        y++;
    }
    return (x == 0 && y == 0);
}