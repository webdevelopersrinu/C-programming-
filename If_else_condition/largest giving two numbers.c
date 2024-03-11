#include <stdio.h>
int main (){
    int a=7;
    int b=7;
    if(a>b){
        printf ("a is largest number");
    }else{
        if(a == b){
            printf("a and b have a same values");
        }
        else {
            printf (" b is largest number");
        }
    }
    return 0 ;
}
