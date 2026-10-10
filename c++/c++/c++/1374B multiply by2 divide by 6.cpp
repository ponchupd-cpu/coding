#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back
 
void solve(){
int n; cin >> n;
int count2=0,count3=0;
while(n>1){
if(n%2==0){
    count2++;
    n=n/2;
}
else if(n%3==0){
    count3++;
    n=n/3;
 }
else{
    cout<<-1<<"\n";
    return;
 }
}
if(count2>count3){
    cout<<-1<<"\n";
}
else if(count2==count3){
    cout<<count2<<"\n";
}
else{
    cout<<count2+2*(count3-count2)<<"\n";
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