#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
void SortZerosAndOnes(vector <int> &v){
int countzero=0;
int n=v.size();
for(int element: v){
  if(element==0){
    countzero++;
  }
}
for(int i=0;i<n;i++){
  if(i<countzero){
    v[i]=0;
  }
  else{
     v[i]=1;
   } 
  }
}
int main(){
int size;
cin>> size;
vector <int> v;
for(int i=0;i<size;i++){
  int element;
  cin>> element;
  v.push_back(element);
}
SortZerosAndOnes(v);
for(int i=0;i<size;i++){
   cout<<v[i]<<" ";
   }

   cout<<endl;
  return 0;
}