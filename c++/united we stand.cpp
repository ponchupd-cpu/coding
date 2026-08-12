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
    int n;cin>> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    vector<int>b,c;
    int max_element=-1;
    for(int i=0;i<n;i++){
      if(a[i]>max_element){
        max_element=a[i];
      }
    }
    for(int i=0;i<n;i++){
      if(a[i]==max_element){
        c.push_back(a[i]);
      }
      else{
        b.push_back(a[i]);
      }
    }
    if(b.size()==0){
        cout<<-1<<"\n";
        return;
    }
    cout<<b.size()<<" "<<c.size()<<"\n";
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<"\n";
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