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
vector<int>v(3);
for(int i=0;i<3;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
int x=v[1]-v[0];
int y=v[2]-v[1];
int ans=min(x,y);
cout<<ans<<"\n";
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