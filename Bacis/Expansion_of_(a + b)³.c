
#include <stdio.h>

int main() {
  int a=3;
  int b=4;
  int left= (a+b)*(a+b)*(a+b);
  int right=(a*a*a)+(b*b*b)+3*a*(b*b)+3*b*(a*a);
 printf("right === %d left %d",right,left);
    return 0;

}
