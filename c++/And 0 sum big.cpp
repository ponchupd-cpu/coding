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
#include <iomanip>
 
#define int long long
using namespace std;
void solve(){
long long n,k;cin>>n>>k;
long long x=1;
long long y=1e9+7;
n%=y;
for(int i=0;i<k;i++){
  x=(x*n)%y;
 }
 cout<<x<<"\n";
}
 
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
  }