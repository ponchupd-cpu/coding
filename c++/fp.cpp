#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
  int r1,c1;
  cout<<"enter r1"<<endl;
  cout<<"enter c1"<<endl;
  cin>>r1>>c1;
  int A[r1][c1];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin>> A[i][j];
    }
  }
  
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cout<<A[j][i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}