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
int n;cin>> n;
for(int i=1;i<=n;i++){
 if(n%i==0){
  cout<<i<<"\n";
  }
 }
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