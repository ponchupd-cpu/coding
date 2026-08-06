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
vector<long long>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<pair<long long,int>>paired_arr(n);
for(int i=0;i<n;i++){
    paired_arr[i]={arr[i],i};
 }
sort(paired_arr.begin(),paired_arr.end());
vector<long long>pref_s(n);
pref_s[0]=paired_arr[0].first;
for(int i=1;i<n;i++){
  pref_s[i]=pref_s[i-1]+paired_arr[i].first;
 }
vector<int>ans(n);
ans[n-1]=n-1;
for(int i=n-2;i>=0;i--){
   if(pref_s[i] >= paired_arr[i+1].first){
     ans[i]=ans[i+1];
   }
   else{
    ans[i]=i;
   }
}
vector<int>result(n);
for(int i=0;i<n;i++){
    result[paired_arr[i].second]=ans[i];
}
for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
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