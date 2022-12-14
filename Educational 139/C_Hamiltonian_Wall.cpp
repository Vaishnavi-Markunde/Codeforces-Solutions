#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define max_heap priority_queue<int>
#define min_heap priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define print_pair(a)    \
    for (auto x : a) \
    cout << x.F << " " << x.S << endl
#define print_sub(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1)
            x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

const int N = 200005;


bool isSafe(int m, vector<vector<char>> &v, int path[], int pos)
{
    if(pos == m)
    {
        if(v[path[pos - 1]][m] == 0) return false;

        for(int i = 0; i < pos; i++)
        if(path[i] == m)
        return false;
    }
    return true;
}


bool hamCycle(vector<vector<char>> &v)

void solve()
{
    int m;
    cin >> m;
    string row1, row2;
    cin >> row1;
    cin >> row2;
    vector<vector<char>> v;
    for (size_t i = 0; i < m; i++)
    {
        v[0].pb(row1[i]);
        v[1].pb(row2[i]);
    }

    vector<char> vn(m, 'W');
    for (size_t i = 0; i < m - 2; i++)
    {
        v.pb(vn);
    }
    
    
    int *path = new int[m];
    for (size_t i = 0; i < m; i++)
    {
        path[i] = -1;
    }

    path[0] = 0;
    if(hamCycle(m, v, path, 1) == false)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    
}

int32_t main()
{
    IO; 
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}