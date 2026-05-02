#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
bool CheckPrefixAndSufixSum(vector <int> &v){
int totalsum=0;
for(int n=0;n<v.size();n++){
  totalsum+=v[n];
 }
int prefixsum=0;
for(int i=0;i<v.size(); i++){
    prefixsum+=v[i];
    int sufixsum=totalsum-prefixsum;
    if(prefixsum==sufixsum){
    return true;
    }
  }
 return false;
}
int main() {
vector <int> v;
int size;
cin>>size;
for(int i=0;i<size;i++){
    int element;
    cin>>element;
    v.push_back(element);
}
cout<<CheckPrefixAndSufixSum(v)<<endl;
  return 0;
}