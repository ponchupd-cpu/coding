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
int sum=0;
for(int i=0;i<n;i++){
  int element;
  cin>> element;
  sum+=element;
  }
 if(sum%2==0){
  cout<<"yes"<<"\n";
 }
 else{
  cout<<"no"<<"\n";
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