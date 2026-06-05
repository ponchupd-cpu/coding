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
int count=0;
for(int i=0;i<10;i++){
  for(int j=0;j<10;j++){
    char character;
    cin>> character;
    if(character == 'X'){
      if(i==0||i==9||j==0||j==9){
        count+=1;
      }
      else if(i==1||i==8||j==1||j==8){
        count+=2;
      }
      else if(i==2||i==7||j==2||j==7){
        count+=3;
      }
      else if(i==3||i==6||j==3||j==6){
        count+=4;
      }
      else if(i==4||i==5||j==4||j==5){
        count+=5;
      }
    }
  }
 }
 cout<< count <<"\n";
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