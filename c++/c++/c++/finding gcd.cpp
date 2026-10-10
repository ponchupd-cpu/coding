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
int j,gcd=0;
for(int i=1;i<=sqrt(n);i++){
   if(n%i==0){
    j=n/i;
    if(k%i==0){
      gcd=max(gcd,i);
    }
    if(k%j==0){
      gcd=max(gcd,j);
    }
   }
 }
 cout<<gcd<<"\n";
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