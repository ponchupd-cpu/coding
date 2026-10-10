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
vector<int>b(n);
for(int i=0;i<n;i++){
   cin>> b[i];
 }
sort(b.rbegin(), b.rend());
if(b.size()==2){
  cout<<b[0]<<" "<<b[1]<<"\n";
  return;
}
int x=b[0],y=b[1];
bool check=true;
for(int i=2;i<n;i++){
    if((x % y)==b[i]){
        x = y;
        y = b[i];
    }
    else{
        check = false;
        break;
    }
  }
  if(check==true){
    cout<<b[0]<<" "<<b[1]<<"\n";
  }
  else{
    cout<<-1<<"\n";
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