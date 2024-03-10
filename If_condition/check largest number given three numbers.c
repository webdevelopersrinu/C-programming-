
#include <stdio.h>
int main (){
    int a=6;
    int b=6;
    int c=6;
    if(a>b && a>c){
        printf("a is the biggest number");
    }
    if(b>a && b>c){
        printf("b is the biggest number");
    }
    if(c>a && c>b){
        printf("c is the biggest number");
    }
    if(a==b && b==c){
        printf("three numbers have equal value");
    }
    return 0 ;
}
