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
int n,k;cin>>n>>k;
if(n%k!=0){
  cout<< 1 <<"\n";
  cout<< n <<"\n";
}
else{
  cout<< 2 <<"\n";
  cout<< 1 <<" "<<n-1<<"\n";
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