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
bool ans=false; 
vector<string>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
string s="";
for(int i=0;i<n;i++){
   if(a[i]+s<s+a[i]){
     s=a[i]+s;
   }
   else{
    s=s+a[i];
   }
}
    cout<<s<<"\n"   ; 
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
