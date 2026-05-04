#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
long long factorial(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
    fact*=i;
  }
  return fact;
}
long long ncr(int n,int r){
int x;
x=factorial(n)/(factorial(r)*factorial(n-r));
  return(x);
}

int main(){
  int row;
  cout<<"enter row number";
  cin>> row;
  for(int i=1;i<=row;i++){
    for(int j=0;j<i;j++){
      cout<<ncr(i,j)<<" ";
    }
     cout<<endl;
  }
  return 0;
}