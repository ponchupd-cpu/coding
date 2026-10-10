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
char c;
cin>>c;
string s;
cin>>s;
int count=0;
int left_pointer=0;
int right_pointer=n-1;
while(left_pointer<right_pointer){
    if(s[left_pointer]==s[right_pointer]){
        left_pointer++;
        right_pointer--;
        continue;
    }
    if(s[left_pointer]==c && s[right_pointer]!= c|| s[left_pointer]!=c && s[right_pointer]==c){
        count++;
    }
    if(s[left_pointer]!=c && s[right_pointer]!=c){
        count+=2;
    }
    left_pointer++;
    right_pointer--;
   }
cout<<count<<"\n";
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
