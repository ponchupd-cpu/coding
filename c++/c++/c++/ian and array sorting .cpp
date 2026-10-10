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
bool sorted=true;
vector<int>a(n);
for(int i=0;i<n;i++){
  cin>>a[i];
}
if(n%2!=0){
    cout<<"yes\n";
    return;
}
for(int i=1;i<n-1;i++){
   int diff=a[i]-a[i-1];
   a[i]-=diff;
   a[i+1]-=diff;
}
if(a[n-2]<=a[n-1]){
    cout<<"yes\n";
} else{
    cout<<"no\n";
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