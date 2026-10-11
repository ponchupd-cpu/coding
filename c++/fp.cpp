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
long long n,m;
long long sum=0; 
long long ans=0;
cin>>n>>m;
vector<long long>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.rbegin(),a.rend());
for(int i=0;i<n;i++){
    if(m<=0){
        break;
    }
  ans=a[i]*m;
   m--;
   sum+=ans;
}
cout<<sum<<"\n";
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
