#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define M 1000000007
#define ll long long
#define pb push_back
#define fo(i,N) for(int i = 0 ; i < N ; i++)
#define foo(i,x,N) for (int i = x; i < N ; i++)
#define fill(a,val) memset(a,val,sizeof(a))
#define fastio()  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ff first
#define ss second
#define MAX 1234567
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(a) a.begin(),a.end()
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define inf 1e18
#define vi vector<int>
#define pii pair<int,int>
#define pqb priority_queue<pair<pair<ll,ll>,int>>
#define pqs priority_queue<ll,vector <ll>,greater<ll>>
/// find_by_order() -- returns the iterator to the kth largest
/// order_of_key() -- number of elements strictly less than k
ll mpow(ll x, ll y, ll m) {if ( y == 0) return 1;  if ( y & 1) return (x % m * mpow(x, y - 1, m) % m) % m; else  {ll temp = mpow(x, y / 2, m) % m; return (temp * temp) % m;}}
ll power(ll x, ll y) {if ( y == 0) return 1;  if ( y & 1) return (x * power(x, y - 1)); else  {ll temp = power(x, y / 2); return (temp * temp);}}
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
        tree_order_statistics_node_update>
        pbds;
void wandan23() {
    fastio()
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



int main() {

    fastio()
    vector <ll> v;
    v.pb(0);
    v.pb(1);
    v.pb(3);
    ll cur = 2;
    ll ma = 1e10;
    ll temp = 1;
    int idx = 3;

    vector <ll> final;
    final.pb(0);
    final.pb(1);
    final.pb(9);
    while ( temp <= ma )
    {   //cout << "here" << endl;
        ll te = lower_bound(v.begin(), v.end(), idx) - v.begin();

        v.pb(v[idx - 1] + te);
        final.pb((final[idx - 1] + (1ll * te % M * mpow(idx, 2, M) % M) % M) % M);
        idx++;
        temp = v[idx - 1];
        if ( temp > ma)
            break;


    }

    int T;
    cin >> T;

    foo(t, 1, T + 1) {

        ll l, r;
        cin >> l >> r;
        int indexl = lower_bound(v.begin(), v.end(), l) - v.begin();
        int indexr = lower_bound(v.begin(), v.end(), r) - v.begin();
        ll p1 = l - v[indexl - 1] - 1;
        ll p2 = v[indexr] - r;
        ll a = ((M + (final[indexr] % M - final[indexl - 1] % M) % M) % M);
        ll b =   ((1ll * p1 % M * mpow(indexl, 2, M) % M) % M) % M;
        ll c = ((1ll * p2 % M * mpow(indexr, 2, M) % M) % M) % M;
        cout << ((((a % M - b % M) % M + M) % M - (c % M)) % M + M) % M << endl;





    }
}




















