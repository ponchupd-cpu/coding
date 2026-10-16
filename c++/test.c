#include <stdio.h>
#include <stdlib.h>

int main() {
  int x,a,b;
  scanf("%d %d %d",&x,&a,&b);
  int m,n,o;
  if(x<80){
    int m=80-x;
    m=m*a;
    o=20*b;
    printf("%d",m+o);
  }
  else if(x>=80){
    n=100-x;
    n=n*b;
    printf("%d",n);
  }
  return 0;
}
