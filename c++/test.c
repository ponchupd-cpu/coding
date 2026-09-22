#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main() {
  char a;
  scanf("%c",&a);
  if(isupper(a)){
    printf(" %c uppercase");
  }
  else if(islower(a)){
    printf("%c lowercase");
  }
}
