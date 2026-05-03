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
  int r2,c2;
  cout<<"enter r2"<<endl;
  cout<<"enter c2"<<endl;
  cin>>r2>>c2;
  int B[r2][c2];
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cin>> B[i][j];
    }
  }
  if(c1!=r2){
    cout<<"matrix multiplication is not possible for this input";
  }
  
  int c[r1][c2];
  for(int i=0;i<r1;i++){   //for multiplication
    for(int j=0;j<c2;j++){
      int value=0;
      for(int k=0;k<c1;k++){
        value+=A[i][k]*B[k][j];
      }
      c[i][j]=value;
    }
  }
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}