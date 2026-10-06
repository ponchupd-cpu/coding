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
string s;
cin>>s;
int max_time=0;
int length=0;
for(int i=0;i<n;i++){
    if(s[i]=='#'){
        length++;
    }
    else{
        length=0;
    }
    if(length>0){
            max_time=max(max_time,(length));
        }
}
cout<<(max_time+1)/2<<"\n";

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
