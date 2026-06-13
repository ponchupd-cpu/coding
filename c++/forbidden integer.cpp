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
int n,k,x;cin>>n>>k>>x;
if(x!=1){
  cout<<"yes"<<"\n"<<n<<"\n";
  for(int i=0;i<n;i++){
    cout<<1<<" ";
  }
 cout<<"\n";
}
else if(n%2==0 && k>=2){
    cout<<"yes"<<"\n"<<n/2<<"\n";
    for(int i=0;i<n/2;i++){
      cout<<2<<" ";
    }
    cout<<"\n";
  }
else if(n%2!=0 && k>=3){
  cout<<"yes"<<"\n"<<(n-3)/2+1<<"\n";
  cout<<3<<" ";
  for(int i=0;i<(n-3)/2;i++){
    cout<<2<<" ";
  }
  cout<<"\n";
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