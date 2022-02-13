vector<string> solve(int n)
{
    vector<string> ans;

    for (int i = 1; i <= n; i++)
    {
        if ((i % 10) % 3 == 0 || i % 3 == 0 && n % 10 * 10 % 3 == 0)
        {
            if (i % 10 == 0 && i % 3 != 0)
            {
                ans.push_back(to_string(i));
                goto jmp;
            }

            //(i%10) != 0 &&
            ans.push_back("clap");
            // cout << i%10 << endl;
            //  else if(i%3 == 0)
            //  ans.push_back("clap");
        }
        else
        {
            ans.push_back(to_string(i));
            // cout << i%10 << endl;

        jmp:
        }
    }

    return ans;
}