#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
 
void solve(){
int n;cin>>n;
string s;
cin>> s;
int ans=n;
int left_ptr=0;int right_ptr=n-1;
while(left_ptr<=right_ptr){
 if(s[left_ptr]!=s[right_ptr]){
   ans=ans-2;
 }
 else{
  break;
  left_ptr++;right_ptr--;
  }
 cout<<ans<<"\n";
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