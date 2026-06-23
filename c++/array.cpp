#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
 
void solve(){
    int n; cin >> n; vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        int btm = 0, stm = 0;
        for(int j = i; j < n; j++){
            if(a[j] > a[i]){
                btm++;
            }
            if(a[j] < a[i]){
                stm++;
            }
        }
        cout << max(btm, stm) << " ";
    }
    cout << "\n";

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