// https://binarysearch.com/problems/Word-Machine

int solve(vector<string>& ops) {
    stack<int> s;
    int n = ops.size();

    for (int i = 0; i < n; i++) {
        //cout << "ops " << ops[i] << endl;

        if (ops[i] == "POP") {
            if (s.empty()) {
                return -1;
            }
            else
                s.pop();
        }
        else if (ops[i] == "DUP") {
            if (s.empty()) {
                return -1;
            }
            else
                s.push(s.top());
        }
        else if (ops[i] == "+") {
            if (s.empty()) {
                    return -1;
            }
            else {
                int p = 0;
                p = s.top();
                s.pop();
                if (s.empty()) {
                    return -1;
                }
                else {
                    p += s.top();
                    s.pop();
                    s.push(p);
				}
            }
        }
        else if (ops[i] == "-") {
            if (s.empty()) {
                return -1;
            }
            else {
                int m = 0;
                m = s.top();
                s.pop();
                if (s.empty()) {
                    return -1;
                }
                else {
                    m -= s.top();
                    s.pop();
                    s.push(m);
                }
            }
        }
        else if (ops[i] != "POP" && ops[i] != "DUP" && ops[i] != "+" && ops[i] != "-" && stoi(ops[i]) <= 100000) {
            s.push(stoi(ops[i]));
            //cout << "s " << s.top() << endl;
        }
    }
    return s.top();
}