#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <numeric>
#include <set>
#include <iomanip>

#define int long long
using namespace std;

void solve(){
int n;cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
  int elements;cin>> elements;
  a[i]=elements;
}
int pos1=0,neg1=0;
for(int i=0;i<n;i++){
  if(a[i]==1){
    pos1++;
  }
  else{
    neg1++;
  }
}
int change=0;
while(neg1>pos1||neg1%2!=0){
  neg1--;pos1++;change++;
}
cout<< change <<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
  }