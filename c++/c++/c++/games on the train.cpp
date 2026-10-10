#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
 
void solve(){
int n;cin>>n;
vector<int>h(n);
for(int i=0;i<n;i++){
  cin>>h[i];
}
sort(h.begin(),h.end());
cout<<h[n-1]+1-h[0]<<"\n";
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