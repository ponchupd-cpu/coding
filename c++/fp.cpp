#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
void swap(vector <int> &v){
  int size=v.size();
  int left_ptr = 0;
  int right_ptr=size-1;
  while(left_ptr<right_ptr){
    if(v[left_ptr]%2!=0 && v[right_ptr]%2==0){
       swap(v[left_ptr],v[right_ptr]);
       left_ptr++;
       right_ptr--;
    }
    if(v[left_ptr]%2==0){
      left_ptr++;
    }
    if(v[right_ptr]%2!=0){
      right_ptr--;
    } 
  }
    return;
}
int main() {
vector <int> v;
int size,left_ptr,right_ptr;
cin>>size;
for(int i=0;i<size;i++){
    int element;
    cin>>element;
    v.push_back(element);
}
swap(v);
for(int i=0;i<v.size();i++){
  cout<<v[i]<<" ";
}
  cout<<endl;
  return 0;
}