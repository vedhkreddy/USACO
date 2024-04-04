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
    ll n, w; cin >> n >> w;
    priority_queue<pair<ll, ll> > pq; 
    forr(i, 0, n){
        ll a, b; cin >> a >> b;
        pq.push(make_pair(a, b));
    }
    ll cur = 0;
    ll total = 0;
    while(pq.size() > 0){
        pi p = pq.top();
        cur += p.second;
        if (cur > w){
            total += (ll(p.first) * (w-cur + p.second));
            break;
        }
        else{total += ll(ll(p.first) * ll(p.second));}
        pq.pop();
    }
    cout << total << endl;
}
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	//freopen("Codeforces.in", "r", stdin);
	//freopen("Codeforces.out", "w", stdout);
 
	ll tc = 1;
	//cin >> tc;
	while (tc--) solve();
}