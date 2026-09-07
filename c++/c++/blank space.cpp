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
int n;cin>>n;
int max_blank=0;
int count=0;
vector<int>a(n);
for(int i=0;i<n;i++){
  cin>>a[i];
  if(a[i]==0){
    count++;
    max_blank=max(max_blank,count);
  }
  else{
    count=0;
  }
 }
 cout<< max_blank <<"\n";
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