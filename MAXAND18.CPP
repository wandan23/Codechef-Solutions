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
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define inf 1e18
// #define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
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
	while (t--)
	{

		int n, k;
		cin >> n >> k;
		ll x;
		int arr[32] = {0};

		fo(i, n)
		{
			cin >> x;

			fo(i, 32)
			{
				if (( 1ll << i) & x)
					arr[i]++;
			}
		}

		ll ans[32] = {0};

		fo(i, 32)
		{
			ans[i] = (1ll * power(2, i) * arr[i]);
		}

		x = 0;
		int index;
		ll mn = -1;

		while ( k--)
		{	mn = -1;
			fo(i, 32)
			{
				if ( ans[i] > mn)
				{
					index = i;
					mn = ans[i];
				}
			}

			x += (1ll << index);
			ans[index] = -1;
		}
		cout << x << endl;


	}


}
