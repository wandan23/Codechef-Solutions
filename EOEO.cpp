#include <bits/stdc++.h>
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
ll mpow(ll x,ll y,ll m){if ( y == 0) return 1;  if ( y&1) return (x%m*mpow(x,y-1,m)%m)%m;else  {ll temp = mpow(x,y/2,m)%m; return (temp*temp)%m;}}
ll power(ll x,ll y){if ( y == 0) return 1;  if ( y&1) return (x*power(x,y-1));else  {ll temp = power(x,y/2); return (temp*temp);}}






int main(){
    
    int t;
    cin >> t;
    while ( t--)
    {
        ll x;
        cin >> x;
        if ( x & 1)
            cout << x/2 << endl;
        else
        {
            int count = 0; 
            ll temp = x;
            while ( temp%2 == 0)
            {
                temp = temp/2;
                count++;
            }
            ll ans =  ( x/power(2,count+1));
            cout << ans << endl;

        }
    }
    

}
