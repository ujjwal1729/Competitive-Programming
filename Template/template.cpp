#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int T = 1e6+1;
const int cf= 998244353;
int dp[T];
#define fr(a,b,i) for (int i=a;i<b;i++)
#define rfr(a,b,i) for(int i = a;i>b;i--)
#define MOD 1000000007
#define INF 1e18
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define endl '\n'
typedef long long ll;   
typedef unsigned long long ull;
typedef long double lld;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a,ll b) {return a*b/gcd(a,b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return ((a - b+m) % m);}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m

//...................................oredered set........................................

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef pair<ll,ll> pii;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//less<ll> means increasing set .... less_equal<ll> means non decreasing mulstiset ...  greater means decreasing set
// A.insert()           to insert
//*A.find_by_order(0)    to find the element at index 0
// A.order_of_key(6)     to find no. of elements with values less than 6
// *A.lower_bound(6)     Lower Bound of X = first element >= X in the set
// *A.upper_bound(6)     Upper Bound of X = first element > X in the set
// for making ordered set to contain multiple values, do insert pair where the second value of pair contains the index of the number in the array

//\.......................................................................................


void solve(){
    ll n;cin >> n;
} 
   
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;cin >> t;
    while(t--) solve();
}
