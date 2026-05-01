#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
void squareandsort(vector <int> &v){
  int size=v.size();
  for(int i=0;i<size;i++){
    v[i]=abs(v[i]);
    v[i]=v[i]*v[i];
  
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
squareandsort(v);
for(int i=0;i<v.size();i++){
  cout<<v[i]<<" ";
}
  cout<<endl;
  return 0;
}