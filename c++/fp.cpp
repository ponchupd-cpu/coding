#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
void prefixsum(vector <int> &v){
  int size=v.size();
  for(int i=1;i<size;i++){
    v[i]=v[i]+v[i-1];
    }
  
   return;
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
prefixsum(v);
for(int i=0;i<v.size();i++){
  cout<<v[i]<<" ";
}
  cout<<endl;
  return 0;
}