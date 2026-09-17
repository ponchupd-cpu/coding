#include <stdio.h>
#include <math.h>
int main() {
  int a = 10;
  int c = 5;

  int b= ++a + c--;
  printf("%d", b);
}
