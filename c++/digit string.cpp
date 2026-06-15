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
    string s; cin >> s;
    int cnt4 = 0; 
    string s1 = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] =='4') cnt4++;
        else{
            s1 += s[i];
        }
    }
    int n = s1.size();
    if (n == 0) {
        cout << cnt4 << "\n";
        return;
    }
    vector<int> p13(n, 0); int cnt13 = 0;
    for(int i = 0; i < n; i++){
        if(s1[i] == '1' || s1[i] =='3'){
            cnt13++;
        }
        p13[i] = cnt13;
    }
    vector<int> s2(n, 0); int cnt2 = 0;
    for(int i = n-1; i >= 0; i--){
        if(s1[i] == '2'){
            cnt2++;
        }
        s2[i] = cnt2;
    }
    int ans = s2[0]; 
    for(int i = 0; i < n; i++){
        int cost_left = p13[i];
        int cost_right = 0;
        if(i + 1 < n){
            cost_right = s2[i+1];
        }
        ans = min(ans, cost_left + cost_right);
    }
    cout << ans + cnt4 << "\n";
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