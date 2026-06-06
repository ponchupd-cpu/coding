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

using namespace std;
void solve(){
int n;cin>> n;
vector<int>v(n);
int min_element=1000000000;

for(int i=0;i<n;i++){
  int elements;
  cin >>elements;
  v[i]=abs(elements);
}

for(int i=0;i<n;i++){
   if(v[i]<min_element){
     min_element=v[i];
   } 
 }
 cout<<min_element<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}