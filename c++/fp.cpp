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
    int n, k;cin>> n>> k;
    string s;cin>> s;
    string z;cin>> z;
    int counts=0;
    int countz=0;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            counts++;
        }
        if(z[i] == '0'){
            countz++;
        }
    }
    int a,b;
    a=n-counts;b=n-countz;
    int countxor=0;
    for(int i=0;i<n;i++){
        if(s[i]==z[i]){
            countxor++;
        }
    }
    int c=n-countxor;
    int v1,v2,v3;
    v1=a*counts;
    v2=b*countz;
    v3=c*countxor;
    int factor = ((1 << k)+1)/3;
    if(k % 2 == 0){
        cout << v1*(factor+1) + v2*(factor+1) + v3*factor << "\n";
    }
    if(k % 2 == 1){
        cout << (v1+v2+v3)*factor << "\n";
    }

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