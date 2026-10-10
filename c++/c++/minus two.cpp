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
int n;cin>>n;int ans=0;
int counta=0,countb=0,countc=0;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
   if(a[i]%2==1){
     counta++;
   }
   else if(a[i]%2==0 && a[i]%4!=0){
     countb++;
   }
   else if(a[i]%4==0){
     countc++;
   }
 }
 ans=max(max(counta,countb),countc);
 cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}