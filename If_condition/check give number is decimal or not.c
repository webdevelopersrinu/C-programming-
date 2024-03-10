
#include <stdio.h>
#include <math.h>
int main (){
    float a=7.6;
    float b=1;
    float c=fmod(a,b);
    if (c == 0){
        printf("give number is not decimal");
    }
    if(c != 0){
        printf("give number is decimal number");
    }
    return 0 ;
}
