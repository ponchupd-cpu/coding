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
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
if(a[0]==1){
    cout<<"yes\n";
 }
else{
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