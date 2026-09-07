#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
 
 
void solve(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int dy = d - b;
    int moves = dy + (a + dy - c);
    if(dy < 0 || (a + dy) < c){
        cout << -1 << '\n';
    } 
    else {
        cout << moves << '\n';
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