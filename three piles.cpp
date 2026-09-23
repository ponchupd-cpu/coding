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
int a,b,c;cin>>a>>b>>c;
int x=abs(a-b);
int y=abs((a+c)-b);
int ans=max(x,y);
cout<<ans<<"\n";
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
