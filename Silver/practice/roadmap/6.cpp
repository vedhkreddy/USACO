#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef double db;
typedef string str;
 
// change ld to db if neccesary
typedef pair<ll,ll> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pld;
 
typedef set<ll> si;
typedef set<ll> sl;
typedef set<ld> sld;
typedef set<str> ss;
typedef set<pi> spi;
typedef set<pl> spl;
typedef set<pld> spld;
 
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<ld> vld;
typedef vector<str> vs;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<si> vsi;
typedef vector<sl> vsl;
typedef vector<pld> vpld;
 
#define mp make_pair
#define f first
#define s second
#define sz(x) (ll)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
 
#define forr(i,a,b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define ford(i,a,b) for (ll i = (ll)(a)-1; i >= (ll)(b); i--)
#define trav(a,x) for (auto& a: x)

 
void solve() {
    ll n; cin >> n;
    vi v;
    ll sumcount = 0;
    forr(i, 0, n){
        ll a; cin >> a;
        v.pb(a);
        sumcount += a;
    }
    ll big; cin >> big;
    ll rots = big / sumcount;
    ll start = rots * sumcount;
    if (start > big){
        start -= sumcount;
        rots--;
    }
    ll cur = 0;
    //cout << rots << endl;
    forr(i, 0, n){
        cur++;
        if ((start + v[i]) > big){
            cout << (rots*n + cur) << endl;
            return;
        }
        start += v[i];
    }
    if (n == 1){
        ll x = big / sumcount;
        ll a = x * sumcount;
        ll b = (x-1) * sumcount;
        ll c = (x+1) * sumcount;
        if (b > big){
            cout << c << endl;
        }
        else if(a > big){
            cout << a << endl;
        }
        else{
            cout << c << endl;
        }
    }
}
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	//freopen("Codeforces.in", "r", stdin);
	//freopen("Codeforces.out", "w", stdout);
 
	ll tc = 1;
	//cin >> tc;
	while (tc--) solve();
}