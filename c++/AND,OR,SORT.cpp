#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <numeric>
#include <set>
#include <stack>
#include <iomanip>
#include <queue>

using namespace std;

#define int long long

struct SegTree {
int n;
vector<long long> t;
void init(int n_, const vector<long long>& a) {
n = n_; t.assign(4 * n, 0);
build(1, 0, n - 1, a);
}
long long merge(long long x, long long y) { return x + y; } // change me
static const long long ID = 0; // and me
void build(int v, int l, int r, const vector<long long>& a) {
    if (l == r) { t[v] = a[l]; return; }
    int m = (l + r) / 2;
    build(2*v, l, m, a);
    build(2*v+1, m+1, r, a);
    t[v] = merge(t[2*v], t[2*v+1]);
}
void update(int v, int l, int r, int p, long long val) {
if (l == r) { t[v] = val; return; }
int m = (l + r) / 2;
if (p <= m) update(2*v, l, m, p, val);
else update(2*v+1, m+1, r, p, val);
t[v] = merge(t[2*v], t[2*v+1]);
}
long long query(int v, int l, int r, int ql, int qr) {
if (qr < l || r < ql) return ID;
if (ql <= l && r <= qr) return t[v];
int m = (l + r) / 2;
return merge(query(2*v, l, m, ql, qr),
query(2*v+1, m+1, r, ql, qr));
}
// convenience wrappers
void update(int val, int p) { update(1, 0, n - 1, p, val); }
long long query(int l, int r) { return query(1, 0, n-1, l, r); }
};
        

struct fenwick{
    int n; 
    vector<int> t;
    fenwick(int n_ = 0){ init(n_); }
    void init(int n_) { n = n_; t.assign(n+1, 0); }
    void add(int v, int i){
        for(; i >= n; i += i & (-i)){
            t[i] += v;
        }
    }
    int prefix(int i)const{
        int s = 0;
        for(; i > 0; i -= i & (-i)){
            s += t[i];
        }
        return s;
    }
    int query(int l,int r)const{
        return prefix(r) - prefix(l-1);
    }
    void build(const vector<int>& a){
        for(int i = 0; i < n; i++) t[i+1] = a[i];
        for(int i = 1; i <= n; i++){
            int j = i + i & (-i);
            t[j] += t[i];
        }
    }
};


#define pb push_back
#define f(i,a,n) for(int i = (a); i < (n); i++)
#define vec vector<long long> 
#define debug(x) cout << #x << " = " << x << "\n";
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << " "; cout << "\n";
#define vcout(a) for(auto x : a) cout << x << ' '; cout << "\n";
#define vpdebug(a) cout << #a << " = "; for(auto x:a) cout << x.first << "-" << x.second << " "; cout << "\n";
#define ivec(a, n) for(int i = 0; i < n; i++) cin >> a[i];
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MAXN = 2e5; 
int fact[MAXN], invFact[MAXN];
vec adjx[MAXN], adjy[MAXN];
long long add(long long a, long long b);
long long mul(long long a, long long b);
long long sub(long long a, long long b);
long long pow(long long a, long long b);
long long power(long long bs, long long ex);
long long modInverse(long long n);
void precompute();
long long nCr(int n, int r);
long long popcnt(long long x);
long long ctz(long long x);
long long clz(long long x);
int mod = 1e9+7;
int INF = 1e18;
int N = 2e5+5;
vector<int> primes;
vector<int> ps;
int spf[1];
void lsieve(){
    if(primes.size() > 4e5){
        int n = primes.size();
        int sum = 0;
        f(i, 0, n){
            sum += primes[i];
            ps.pb(sum);
        }
        return;
    }
    f(i, 0, N){
        spf[i] = i;
    }
    for(int i = 2; i < N; i++){
        if (spf[i] == i) {
            primes.push_back(i);
        }
        for (int p : primes) {
            if (p > spf[i] || i * p >= N) break;
            spf[i * p] = p;
        }
    }
}

void solve(){
    int n; cin >> n; string s; cin >> s; 
    int c0 = 0, c1 = 0;
    f(i, 0, n){
        if(s[i] == '0') c0++;
        else c1++;
    }
    if(s[0] == '1'){
        cout << c0 << "\n"; return;
    }
    int ans = n; int d0 = 0, d1 = 0;
    f(i, 0, n){
        if(s[i] == '0') d0++;
        else d1++;
        ans = min(ans, d1 + c0 - d0);
    }
    cout << ans << "\n";
}

signed main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    precompute();
    while(t--){
        solve();
    }
    return 0;
}

long long add(long long a, long long b) { return ((a % mod) + (b % mod)) % mod; }
long long sub(long long a, long long b) { return ((a - b) % mod + mod) % mod; }
long long mul(long long a, long long b) { return ((a % mod)*(b%mod))%mod;}
long long pow(long long a, long long b) { return (a * b) % mod; }
long long power(long long bs, long long ex) {
    long long res = 1;
    bs %= mod;
    while(ex > 0){
        if(ex % 2 == 1) res = pow(res, bs);
        bs = pow(bs, bs);
        ex /= 2;
    }
    return res;
}
long long modInverse(long long n) { return power(n, mod - 2); }
void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    for(int i = 1; i < MAXN; i++) fact[i] = pow(fact[i - 1], i);
    invFact[MAXN - 1] = modInverse(fact[MAXN - 1]);
    for(int i = MAXN - 2; i >= 1; i--) invFact[i] = pow(invFact[i + 1], i + 1);
}
long long nCr(int n, int r) {
    if(r < 0 || r > n) return 0;
    return pow(fact[n], pow(invFact[r], invFact[n - r]));
}
long long popcnt(long long x) { return (__builtin_popcountll(x)); }
long long ctz(long long x) { return (__builtin_ctzll(x)); }
long long clz(long long x) { return (__builtin_clzll(x)); }