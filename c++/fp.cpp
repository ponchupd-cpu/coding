#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
vector <int> v;
cout<<"enter size of vector?";
int size;
cin>> size;
for(int i=0;i<size;i++){
  int element;
  cin>> element;
  v.push_back(element);
}
int queries1,prefixsum1=0;
cout<<"enter querie1"<<endl;
cin>> queries1;
for(int i=0;i<queries1;i++){
  prefixsum1+=v[i];
}
int queries2,prefixsum2=0;
cout<<"enter querie2"<<endl;
cin>> queries2;
for(int i=0;i<queries2;i++){
  prefixsum2+=v[i];
}
cout<<prefixsum1-prefixsum2;
  return 0;
}