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

using namespace std;

void solve(){
int n,k;cin>> n>> k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>> v[i];
}
map<int, int>cnt;
for(int i=0;i<n;i++){
    cnt[v[i]]++;
 }
int freq=cnt[k];
if(freq==0){
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}