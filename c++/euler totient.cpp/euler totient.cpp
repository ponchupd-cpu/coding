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
if(n<1){
    cout<<0<<"\n";
}
vector<int>totient(n+1);
for(int i=0;i<=n;i++){
    totient[i]=i;
}
for(int i=2;i<=n;i++){
   if(totient[i]==i){
     for(int j=i;j<=n;j+=i){
        totient[j] -=totient[j]/i;
     }
   }
}
cout<<totient[n]<<"\n";
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