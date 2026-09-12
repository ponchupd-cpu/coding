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
    int n; cin >> n; 
    vector<int> a(n);
    int countzero = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0){
            countzero++;
        }
    }
    string ans = "";
    if(countzero == 1){
        cout << "NO\n"; 
        return;
    }
    else if(countzero == 0){
        for(int i = 0; i < n; i++){
            ans += 'A';
        }
    }
    else{
        bool firstzero = false;
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                if(firstzero == false){
                    ans += 'A';
                    firstzero = true;
                }
                else{
                    ans += 'B';
                }
            }
            else{
                ans += 'C';
            }
        }
    }
    cout << "YES\n" << ans << "\n";
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
