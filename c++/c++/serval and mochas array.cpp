#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define pb push_back
 
void solve(){
int n;cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
  cin>>a[i];
}
bool pairs_gud=false;
for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    if(__gcd(a[i],a[j])<=2){
      pairs_gud=true;
      break;
    }
  }
}
if(pairs_gud==true){
  cout<<"yes\n";
}
else{
  cout<<"no\n";
}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}