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
int x,y,z;cin>>x>>y>>z;
if((x&y)==(y&z)&&(y&z)==(z&x)){
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
