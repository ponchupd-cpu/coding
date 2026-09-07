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
int k=0;
int count=0;
for(int i=0;i<n;i++){
  if(a[i]==2){
    count++;
  }
 }
 if(count%2!=0){
  cout<<-1<<"\n";
 }
 else if(count==0){
  cout<<1<<"\n";
 }
 else{
  int target=count/2;
  for(int i=0;i<n;i++){
    if(a[i]==2){
      k++;
    }  
    if(k==target){
      cout<<i+1<<"\n";
      return;
    }
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