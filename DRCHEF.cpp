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
// #define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define pqb priority_queue<pair<pair<ll,ll>,int>>
#define pqs priority_queue<pair<ll,ll>,vector <pair<ll,ll>>,greater<pair<ll,ll>>>
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

    int t;
    cin >> t;
    while ( t--)
    {
        ll n, x;
        cin  >> n >> x;

        ll temp;
        multiset <ll> s;
        fo(i, n)
        {
            cin >> temp;
            s.insert(temp);
        }


        ll ans = 0;

        while ( !s.empty() )
        {
            //cout << x << endl;
            auto it = s.end();
            it--;

            if ( *it <= x)
            {
                ans += s.size();
                break;
            }

            it = s.begin();
            if ( *it > x)
            {
                auto it1 = s.end();
                it1--;
                temp = *it1;
                if ( x < (temp + 1) / 2)
                {
                    x = x * 2;
                    ans++;
                }
                else
                {
                    ans += s.size() + 1;
                    break;
                }
            }
            else
            {
                it = s.lower_bound(x);
                if ( *it != x)
                    it--;

                temp = *it;
                if ( temp * 2 >= x)
                {
                    x = 2 * temp;
                    ans++;
                    s.erase(it);
                }
                else
                {
                    auto it1 = s.end();
                    it1--;
                    temp = *it1;
                    if ( x < (temp + 1) / 2)
                    {
                        x = x * 2;
                        ans++;
                    }
                    else
                    {
                        ans += s.size() + 1 ;
                        break;
                    }
                }
            }

        }
        cout << ans << endl;
    }





}


















