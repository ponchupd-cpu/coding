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
sort(a.begin(),a.end());
if(a[0]==a[n-1]){
  cout<<"NO\n";
  return;
 }
  cout<<"YES\n";
  cout<<a[n-1]<<" "<<a[0]<<" ";
  for(int i=1;i<n-1;i++){
    cout<<a[i]<<" ";
  }
  cout<<"\n";
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