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
 int count=0;
 for(int i=0;i<n;i++){
    if(a[i]==0){
        count++;
    }
 }
if(count<2){
    cout<<-1<<"\n";
 }
else if(a[0]==0 && a[n-1]==0){
    cout<<0<<"\n";
}
else if(a[0]==1&&a[n-1]==1){
    cout<<2<<"\n";
}
else{
    cout<<0<<"\n";
}
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