#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define pb push_back;
void solve() {
long long n;
cin>>n;
long long sum=0;long long ans=0;
vector<long long>g(n);
for(int i=0;i<n;i++){
    cin>>g[i];
}
sort(g.begin(),g.end());
if(n%2==0){
  for(int i=1;i<n;i+=2){
    ans=max(g[i],g[i-1]);
    sum+=ans;
  }
}
else if(n%2!=0){
  for(int i=n-1;i>=2;i-=2){
     ans=max(g[i],g[i-1]);
     sum+=ans;
  }
  sum+=g[0];
 }
 cout<<sum<<"\n";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}