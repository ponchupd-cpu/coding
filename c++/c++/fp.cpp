#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
 
void solve(){
int n;cin>>n;
int xor_val=0;
vector<int>a(n);
for(int i=0;i<n;i++){
    int val;
    cin>>val;
    xor_val ^= val;
}

if(n%2!=0){
  cout<<xor_val<<"\n";
 }
else{
  if(xor_val==0){
    cout<<0<<"\n";
  }
  else{
    cout<<-1<<"\n";
  }
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