// int solve(vector<vector<int>> &friends)
// {
//     int n = friends.size();

//     vector<int> par(n);
//     vector<int> cnt(n, 1);

//     for (int i = 0; i < n; i++)
//     {
//         par[i] = i;
//     }
//     lambda
//     function<int(int)> find = [&](int x)
//     {
//         if(par[x] == x)
//         {
//             return x;
//         }
//         else
//         {
//             par[x] = find(par[x]);
//             int y = find(par[x]);
//             par[x] = y;
//             return y;
//         }
//         turnary op
//          return (par[x] == x) ? x : par[x] = find(par[x]);
//     };
//      lambda non recursive function can use auto
//      auto unite = [&](int x, int y)
//     function<void(int,int)> unite = [&](int x, int y)
//     {
//         x = find(x);
//         y = find(y);
//         if (x != y)
//         {
//             par[x] = y;
//             cnt[y] += cnt[x];
//         }
//     };

//       for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < friends[i].size(); j++)
//         {
//             unite(i, friends[i][j]);
//         }
//     }
//      cout << "parent" << endl;
//      for(int i = 0; i < par.size(); i++)
//      {
//          cout << par[i] << endl;
//      }
//      cout << "cnt" << endl;
//      for(int i = 0; i < par.size(); i++)
//      {
//          cout << cnt[i] << endl;
//      }
//     int ans = 0;
//     for(int i = 0; i < par.size(); i++)
//     {
//         if(par[i] == i)
//         {
//             ans++;
//         }
//     }
//     return ans;
// }

// solution wihtout lambda functions
// https://binarysearch.com/problems/Friend-Groups

// function<int(int)> find = [&](int x)
int find(int x, vector<int> &par, vector<int> &cnt)
{
    if (par[x] == x)
    {
        return x;
    }
    else
    {
        par[x] = find(par[x], par, cnt);
        int y = find(par[x], par, cnt);
        par[x] = y;
        return y;
    }
};

void unite(int x, int y, vector<int> &par, vector<int> &cnt)
{
    x = find(x, par, cnt);
    y = find(y, par, cnt);
    if (x != y)
    {
        par[x] = y;
        cnt[y] += cnt[x];
    }
};
int solve(vector<vector<int>> &friends)
{
    int n = friends.size();

    vector<int> par(n);
    vector<int> cnt(n, 1);

    for (int i = 0; i < n; i++)
    {
        par[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < friends[i].size(); j++)
        {
            unite(i, friends[i][j], par, cnt);
        }
    }

    int ans = 0;
    for (int i = 0; i < par.size(); i++)
    {
        if (par[i] == i)
        {
            ans++;
        }
    }
    return ans;
}