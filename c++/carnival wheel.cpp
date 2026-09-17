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
int l,a,b;cin>>l>>a>>b;
int max_prize=0;
int current=a;
for(int i=0;i<l;i++){
max_prize=max(max_prize,current);
current=(current+b)%l;
}
cout<<max_prize<<"\n";
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