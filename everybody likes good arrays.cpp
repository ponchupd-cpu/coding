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
int count=1;
for(int i=0;i<n;i++){
  if(a[i]%2==0){
    a[i]=0;
  }
  else{
    a[i]=1;
  }
}
for(int i=1;i<n;i++){
  if(a[i]==a[i-1]){
    count++;
  }
  else{

  }
 }
 cout<<count-1<<"\n";
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