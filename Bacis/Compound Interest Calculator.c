#include <stdio.h>
int main(){
    float payment=2000;
    float time=1;
    float rate=2;
    float coum_intre=payment*pow((1+(rate/100)),time);
    printf("total amount is = %f",coum_intre);
    return 0;
}
