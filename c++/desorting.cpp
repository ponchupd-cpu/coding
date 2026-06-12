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
vector<int>a(n);
int diff, min_diff=1000000000;
for(int i=0;i<n;i++){
  cin>>a[i];
}
bool sorted=true;
for(int i=1;i<n;i++){
  if(a[i-1]>a[i]){
    sorted=false;
    break;
  }
} 
if(!sorted){
cout<<0<<"\n";
return;
}
int x,y;
for(int i=1;i<n;i++){
  diff=a[i]-a[i-1];
  if(diff<min_diff){
    min_diff=diff;
    x=a[i-1];y=a[i];
  }
 }
int ans=(min_diff/2)+1;
cout<<ans<<"\n";
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