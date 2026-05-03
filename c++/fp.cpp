#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
 int n,m;
 cout<<"enter number of rows n"<<endl;
 cout<<"enter number of columns m"<<endl;
 cin>>n>>m;
 int array[n][m];
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cin>>array[i][j];
  }
 }
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cout<<array[i][j]<<" ";
  }
  cout<<endl;
 }
 

  return 0;
}