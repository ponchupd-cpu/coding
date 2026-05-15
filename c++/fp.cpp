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
  int n;
  cin>> n;
  vector <int> v(n);
  for(int i=0;i<v.size();i++){
    int elements;
    cin>> elements;
    v[i]=elements;
   
  }
  int max;
  max=v[0];
  for(int i=0;i<v.size();i++){
    if(v[i]>max){
      max=v[i];
    }
    else{

    }
  }
  int sum=0;
  for(int i=0;i<v.size();i++){
    sum= sum+max;
  
  }
  cout<<sum<<endl;
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}