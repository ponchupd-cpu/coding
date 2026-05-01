#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
int size;
cin>> size;
vector <int> v;
for(int i=0;i<size;i++){
  int element;
  cin>> element;
  v.push_back(element);
}
for(int i=0;i<size;i++){
  cout<<"vector is "<<v[i]<<" ";
}

   cout<<endl;
  return 0;
}