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
int n;cin>> n;
int digit=n;
int count=0;
while(digit>0){
    digit=digit/10;
    count++;
}
int first_digit;
while(n>=10){
    n=n/10;
}
first_digit=n;
cout<<(count-1)*9+first_digit<<"\n";
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