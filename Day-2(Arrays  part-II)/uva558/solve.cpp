// #pragma GCC optimize("O3")
// #pragma GCC target("popcnt")
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;

// constant
#define PI acos(-1.0)
#define endl '\n'
#define mod 1000000007
// typedef
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef double db;
typedef unsigned un;
typedef pair<int, int> pii;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

// Debug Setting up
#define watch(x) cout << (#x) << "=" << x << endl
#define watch2(x, y) cout << (#x) << "=" << x << " & " << (#y) << "=" << y << endl;
#define watchara(wow)     \
    for (auto x : wow)    \
    {                     \
        cout << x << " "; \
    }                     \
    cout << "\n"

// defining fast_io
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// defining something
#define checkbit(mask, pos) (mask & (1 << pos))
#define setbit(mask, pos) (mask | (1 << pos))
#define flipbit(mask, pos) (mask ^ (1 << pos))
#define bitclear(mask, pos) (mask & ~(1 << pos))
#define F first
#define S second
#define bugs cout << "Bugs" << endl

// defining Graph direction
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
const int xx[] = {0, 0, 1, 1, 1, -1, -1, -1};
const int yy[] = {1, -1, 0, 1, -1, 0, 1, -1};

// Main Function Start From Here

bool detectNegativeCycle(vector<vector<int>> &adj, int n)
{

    vector<int> dist(n, 1e9);
    dist[0] = 0;
    // shortest path
    for (int i = 0; i < n - 1; i++)
    {
        for (auto x : adj)
        {
            int u = x[0], v = x[1], w = x[2];
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }
    // for negative cycle
    for (auto x : adj)
    {
        int u = x[0], v = x[1], w = x[2];
        if (dist[u] + w < dist[v])
            return true;
    }
    return false;
}

void solve()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj(e);
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[i] = {u, v, w};
    }
    cout << (detectNegativeCycle(adj, n) ? "possible" : "not possible") << endl;
}

int main()
{
    fast_io;
    int Test_Limit = 1;
    cin >> Test_Limit;
    for (int cas = 1; cas <= Test_Limit; cas++)
    {
        solve();
    }
    return 0;
}