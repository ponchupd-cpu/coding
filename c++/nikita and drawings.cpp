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
int count=0;int ans=0;int sum=0;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    count++;
    sum+=a[i];
    if(sum<count*(count+1)/2){
        cout<<"no\n";
        return;
    }
}
ans=count*(count+1)/2;
if(sum>=ans){
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
