#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
 
using namespace std;
using namespace __gnu_pbds;
 
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
ll a[n];     \
f(i, n) cin >> a[i]
#define iv(v,n) vector<ll> v(n); f(i,n) cin >> v[i]
#define MOD (1000000007)
#define INF 1000000000000000000LL // Infinity for ll
#define mp make_pair
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
 
template<typename T>
using os = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<typename T>
using oms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
// read question properly
// don't forget newlines!!!!!!
// take care about cin >> t;
// comment the optimization before debugging
// ALWAYS USE FIXED << SETPRECISION WHILE OUTPUTTING FLOATS
 
void solve() {
    ll n,k;
    cin >> n >> k;
    set<ll> st;
    f(i,n) {
        st.insert(i+1);
    }
 
    vector<ll> ans(n);
    ll p1 = k-1;
    while(p1 < n) {
        ans[p1] = *st.begin();
        st.erase(st.begin());
        p1 += k;
    }
    f(i,n) {
        if(ans[i]) {
            cout << ans[i] << ' ';
        }
        else{
            cout << *st.begin() << ' ';
            st.erase(st.begin());
        }
    }
    cout << nline;
}
 
int main() {
#ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    long long t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
#ifdef PRADY
    cout << "\nTime taken: " << ((float) (clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}